#include <stdio.h>

int findLargestNumber(int a[], int n)
{
    int largest = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > largest)
            largest = a[i];
    }
    return largest;
}

int main()
{
    int n;
    printf("Enter the number of elements you want to enter:\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The largest number in the array: %d", findLargestNumber(a, n));
}