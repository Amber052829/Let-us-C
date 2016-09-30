#include<stdio.h>

int main() {
int a[10], i, k, n, b, s;
printf("Enter the size-");
scanf("%d",&s);
for(i=0;i< s;i++)
{
    scanf("%d",&a[i]);

}
printf("Enter the element to delete");
scanf("%d",&k);
for(i=0;i< s;i++)
{
if(k==a[i])
b=i;

}
for(i=b;i< s;i++)
{
    a[i]=a[i+1];
}
printf("resultant array \n");

for(i = 0; i < s - 1; i++) {
    printf("%d\n", a[i]);
}

return 0;
}