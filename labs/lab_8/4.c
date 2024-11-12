#include <stdio.h>

int getCornerSum(int rows, int columns, int a[rows][columns])
{
    int sum = a[0][0] + a[0][columns - 1] + a[rows - 1][0] + a[rows - 1][columns - 1];
    return sum;
}

int main()
{
    int rows, columns;
    printf("Enter the number of rows and columns:\n");
    scanf("%d %d", &rows, &columns);
    int a[rows][columns];
    printf("Enter the elements:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("The sum of the corner elements of the matrix: %d", getCornerSum(rows, columns, a));
    return 0;
}