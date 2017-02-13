#include<stdio.h>


int main() {
int a[6], i, o=0, e=0, s=0;
printf("Enter the values");


for(i=0;i<=5;i++) {

scanf("%d", &a[i]);

if(a[i]%2==0){
e=e+a[i];
}
else{
o=o+a[i];
}
}

printf("Sum(odd)= %d \n",o);
printf("Sum(Even)= %d \n",e);




return 0;
}
