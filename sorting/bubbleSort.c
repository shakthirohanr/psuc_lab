#include <stdio.h>

int main()
{
    printf("This is an implementation of bubble sort:\n");
    int n, temp;
    printf("Enter the number of elements:\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("The array after sorting is:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}