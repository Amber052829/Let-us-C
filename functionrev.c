#include <stdio.h>

int rev ( int a){
    int b,c,r = 0;
    while(a>0){
      b=a%10;
      r=r*10+b;
      a=a/10;
    }
    return r;   
}

int main()
{
  
  printf("Reverse number- %d",rev(234));
  
  return 0;
}