#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100];
    
    printf("First string- \n");
    scanf("%s", a);
    
    printf("Second string- \n");
    scanf("%s", b);
    
    strcat(a,b);
    
    printf("Concatenated String - %s\n",a);
    
    return 0;

}