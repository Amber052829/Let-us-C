#include<stdio.h>
int main()
{
int i, n, a[10], b[10], sum[10];
printf(" Enter the size of A and B\n");
scanf("%d" , &n);
printf(" Enter the elements of A\n");
for(i=0 ; i<n ; i++)
{
scanf("%d" , &a[i]);
} 
printf(" Enter the elements of B\n");
for(i=0 ; i<n ; i++)
{
scanf("%d" , &b[i]);
}
for(i=0 ; i<n ; i++){
sum[i] = a[i] + b[i];
}
printf(" Sum of elements of A and B\n");
for(i=0 ; i<n ; i++){
printf("%d\t" , sum[i] );
}

return 0;
}