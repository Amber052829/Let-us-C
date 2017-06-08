#include <stdio.h>

int rev ( int a){
    int b,c,r;
    while(a>0){
      b=a%10;
      r=r*10+b;
      a=a/10;
    }
    return r;   
}

void incr(int &a) {
  a++;
}

int main()
{
  int a = 10;
  incr(a);
  printf("Value of a- %d", a);
  //printf("Reverse number- %d",r);
  
  return 0;
}

int mult (int x, int y)
{
  return x * y;
}