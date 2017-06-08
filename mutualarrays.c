#include<stdio.h>
int main()
{
int i, n, e=0, k=0, j, a[10], b[10],c[10];
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
e=a[i];
for(j=0;j<n;j++){
  if(e==b[j]){
    c[k]=e;
    k++;
  }
}
}
for(i=0 ; i<k ; i++){
printf("%d\t" , c[k] );
}

return 0;
}