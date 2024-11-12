
#include <stdio.h>
int main()
{
    int n, pos, ele;
    printf("Enter number  of elements:");
    scanf("%d", &n);
    int a[n + 1];
    printf("Enter the values:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("\nEnter the element and position of insertion:");
    scanf("%d%d", &ele, &pos);
    for (int i = n; i >= pos; i--)
        a[i] = a[i - 1];
    a[pos - 1] = ele;
    n = n + 1;
    printf("\nThe array after insertion is:");
    for (int i = 0; i < n; i++)
        printf("%d\n", a[i]);
    return 0;
}