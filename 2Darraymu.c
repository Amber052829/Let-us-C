#include<stdio.h>
int main()
{
int a[2][2], b[2][2],c[2][2], i, j, k, sum=0;
for(i=0 ; i<2 ; i++)
{
    for(j=0 ; j<2 ; j++){
        scanf("%d" , &a[i][j]);
    }
}
for(i=0 ; i<2 ; i++)
{
    for(j=0 ; j<2 ; j++){
        scanf("%d", &b[i][j]);
    }   
}
for (i = 0; i < 2; i++) {
      for (j = 0; j < 2; j++) {
        for (k = 0; k < 2; k++) {
          sum = sum + a[i][k]*b[k][j];
        }
 
        c[i][j] = sum;
        sum = 0;
      }
    }
 
    printf("Product of entered matrices:-\n");
 
    for (i = 0; i < 2; i++) {
      for (j = 0; j < 2; j++){
        printf("%d\t", c[i][j]);
 
      printf("\n");
    }
  }
return 0;
}