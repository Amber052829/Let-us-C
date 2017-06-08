#include<stdio.h>


void Sort(int *p, int size) {
    	int i, *base,j,b[5],temp = 0;
        base = p;
        for(i=0;i<5;i++){
            b[i] = *p;
             p++;
            }
        for(i = 0; i < size; i++) {
            for(j=i+1;j<5;j++){
                if(b[i]> b[j]){
                    temp = b[i];
                    b[i] = b[j];
                    b[j] = temp;
                }
            }  
       }
       for(i = 0 ; i<5 ; i++){
           *base = b[i];
           base ++;

       }
}

int main() {
    int a[5],i;
    int *p;
    p = a;
    for(i = 0 ; i < 5 ; i++){
        scanf("%d",&a[i]);
    }
    Sort(a, 5);

    printf("Ascending Order \n \n ");
    for(i = 0; i < 5; i++) {
            printf("%d \n", *p);
            p++;
        }

    
    return 0;
}