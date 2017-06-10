#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000],i;
    printf("Enter a string: ");
    scanf("%s",s);
    i=strlen(s);
    printf("Length of string: %d\n",i);
    return 0;
}