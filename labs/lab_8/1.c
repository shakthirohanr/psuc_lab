#include<stdio.h>

int getFactorial(int x){
    int fact = 1;
    for(int i = 1; i <= x; i++){
        fact *= i;
    }
    return fact;
}

int main(){
    int n,r,nCr;
    printf("Enter n and r:");
    scanf("%d %d", &n, &r);
    nCr = getFactorial(n) / ((getFactorial(r) * getFactorial(n - r)));
    printf("The value of nCr is %d\n", nCr);
    return 0;
}