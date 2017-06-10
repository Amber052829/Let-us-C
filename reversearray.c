#include<stdio.h>


int main() {
int a[6], i;
printf("Enter the values\n");


for(i=0;i<=5;i++) {

scanf("%d", &a[i]);


}
for(i=5;i>=0;i--) {
printf("%d\n",a[i]);
}
return 0;
}
