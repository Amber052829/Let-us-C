#include<stdio.h>

int main() {
    int i;
    FILE *ptr,*p,*t;
    char c;
    ptr = fopen("abc.txt", "w");
    p= fopen("vowel.txt", "w");
    t= fopen("consonant.txt", "w");
    for(i=1;i<=10;i++)
    {
        
        printf("i: %d\n", i);
    scanf("%c", &c);
    fflush(stdin);
    fputc(c, ptr);
   
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
    {
        fputc(c,p);
    }
    else
    {
        fputc(c,t);
    }
    
    }
    
    
    return 0;
}