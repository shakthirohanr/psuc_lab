#include <stdio.h>

int main()
{
    printf("This is an implementation of selection sort:\n");
    int n, smallest, temp;
    printf("Enter the number of elements you want enter:\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (int i = 0; i < n - 1; i++)
    {
        smallest = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[smallest])
                smallest = j;
        }
        temp = arr[i];
        arr[i] = arr[smallest];
        arr[smallest] = temp;
    }
    printf("The array after sorting is:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}