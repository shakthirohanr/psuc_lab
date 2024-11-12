#include <stdio.h>
#include<string.h>
#include <stdbool.h>

bool isPalindrome(char str[])
{
    int len = strlen(str);
    for(int i = 0; i < len/2; i++)
    {
        if(str[i]!=str[len-2-i])
         return 0;
    }
    return 1;
}

int main()
{
  char str[100];
  printf("Enter the string:\n");
  fgets(str,sizeof(str),stdin);
  if(isPalindrome(str))
   printf("The entered string is a palindrome");
  else
   printf("The entered string is not a palindrome");
}