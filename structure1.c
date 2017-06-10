#include<stdio.h>
#include<string.h>

typedef struct Employee{
    int id;
    char name[10];

}emp;

int main()
{
    emp amber,deepanshu,harsh;
    amber.id=1;
    strcpy(amber.name,"Amber");
    deepanshu.id=2;
    strcpy(deepanshu.name,"Deepanshu");
    harsh.id=3;
    strcpy(harsh.name,"Harsh");
    printf("\n%d\n", amber.id);
    printf("\n%s\n", amber.name);
    printf("\n%d\n", deepanshu.id);
    printf("\n%s\n", deepanshu.name);
    printf("\n%d\n", harsh.id);
    printf("\n%s\n", harsh.name);
    return 0;
}