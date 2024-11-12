#include <stdio.h>

int getArraySum(int a[],int n)
{
    int sum = 0; 
    for(int i = 0; i < n; i++)
     sum += a[i];
    return sum;
}

int main()
{
    int n;
    printf("Enter the number of elements you want to enter:\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements:\n");
    for(int i = 0; i < n; i++)
     scanf("%d", &a[i]);
    int arraySum = getArraySum(a, n);
    printf("The sum of the elements of the array: %d", arraySum);
    return 0;
}
