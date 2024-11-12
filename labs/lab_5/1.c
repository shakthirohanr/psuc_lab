#include <stdio.h>
int main()
{
    int n, smallest, largest;
    printf("Enter number  of elements:");
    scanf("%d", &n);
    int a[n];
    printf("Enter the values:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    smallest = a[0];
    largest = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > largest)
            largest = a[i];
        if (a[i] < smallest)
            smallest = a[i];
    }
    printf("The smallest element is %d.\n", smallest);
    printf("The largest element is %d.", largest);
    return 0;
}