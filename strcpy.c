#include<stdio.h>
#include<string.h>    

int main()
{
    char a[20];
    char b[20];
    scanf("%s",a);
    strcpy(b,a);
    printf("Main string: %s\n", a);
    printf("Copied string: %s\n", b);
    return 0;
}