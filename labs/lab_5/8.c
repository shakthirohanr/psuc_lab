#include <stdio.h>
#include <math.h>
int main()
{
    int n, i, sum;
    int a[100];
    printf("Enter number of digits: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the %.0f's place digit: ", pow(10, i));
        scanf("%d", &a[i]);
    }
    for (i = n - 1; i >= 0; i--)
    {
        sum += pow(10, i) * a[i];
    }
    printf("The number is %d.", sum);
    return 0;
}