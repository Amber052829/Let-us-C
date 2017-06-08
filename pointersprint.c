#include<stdio.h>
int main(){
    int a[5], *p, i ;
    p = a;
    for(i=1;i<=5;i++){
        scanf("%d",p);
        p++;
    }
    p--;
    for(i=1;i<=5;i++){
        printf("%d\n",*p);
        p--;
    }
    return 0;
}