#include<stdio.h>

int add(int a,int b,int c=0){
    return (a+b+c);
}
int main()
{
    printf("%d", add(3,5));
    return 0;

}