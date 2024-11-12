#include <stdio.h>
#include <stdbool.h>

bool isMultiplyable(int column1, int row2)
{
    return column1 == row2;
}

void multiplyMatrix(int row1, int column1, int row2, int column2, int array1[row1][column1], int array2[row2][column2], int product[row1][column2])
{
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column2; j++)
        {
            product[i][j] = 0;
            for (int k = 0; k < column1; k++)
            {
                product[i][j] += array1[i][k] * array2[k][j]; // Use multiplication
            }
        }
    }
}

int main()
{
    int row1, column1, row2, column2;

    printf("Matrix 1:\n");
    printf("Enter the number of rows:\n");
    scanf("%d", &row1);
    printf("Enter the number of columns:\n");
    scanf("%d", &column1);
    int array1[row1][column1];
    printf("Enter the elements:\n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
            scanf("%d", &array1[i][j]);
    }

    printf("Matrix 2:\n");
    printf("Enter the number of rows:\n");
    scanf("%d", &row2);
    printf("Enter the number of columns:\n");
    scanf("%d", &column2);
    int array2[row2][column2];
    printf("Enter the elements:\n");
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < column2; j++)
            scanf("%d", &array2[i][j]);
    }

    if (!isMultiplyable(column1, row2))
    {
        printf("Matrix multiplication is not possible with the given dimensions.\n");
        return 0;
    }

    int product[row1][column2];
    multiplyMatrix(row1, column1, row2, column2, array1, array2, product);

    printf("The product of the matrices is:\n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column2; j++)
            printf("%d ", product[i][j]);
        printf("\n");
    }

    return 0;
}
