#include<stdio.h>


int main() {
int a[5], i, j, s=0;
printf("Enter the values");


for(i=0;i<=4;i++) {

scanf("%d", &a[i]);

s=s+a[i];
}

printf("Sum= %d \n",s);





return 0;
}
