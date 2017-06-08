#include<stdio.h>

void swap(int *a,int *b){
    int temp;
    temp=*b;
    *b=*a;
    *a=temp;
}    

int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("Before swapping:\n");
    printf("a=%d\nb=%d\n",a,b);
    swap(&a,&b);
    printf("After swapping:\n");
    printf("a=%d\nb=%d\n",a,b);
    return 0;
}