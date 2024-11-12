#include <stdio.h>
int main()
{
    int n;
    char order;
    printf("Enter number  of elements:");
    scanf("%d", &n);
    int a[n];
    printf("Enter the values:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter a for ascending and enter d for descending:\n");
    scanf(" %c", &order);
    switch (order)
    {
    case 'a':
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (a[j] > a[j + 1])
                {
                    int temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
        }
        break;
    case 'd':
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (a[j] < a[j + 1])
                {
                    int temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
        }

        break;

    default:
        break;
    }
    for (int i = 0; i < n; i++)
        printf(",%d", a[i]);
    return 0;
}