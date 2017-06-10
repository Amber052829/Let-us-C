#include<stdio.h>
#include<string.h>
int main()
{
    char a[50];
    char *rev;
    printf("Enter any string -");
    scanf("%s",a);
    rev = strrev(a);
   
    return 0;
}