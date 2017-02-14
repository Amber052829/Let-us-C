#include<stdio.h>

int main() {
    /*

    FILE *ptr;
    ptr = fopen("abc.txt", "w");
    fputc('a', ptr);
    fputc('b', ptr);
    fputc('c', ptr);
*/
        FILE *ptr;
        char c;
        ptr = fopen("abc.txt", "r");

        while((c = fgetc(ptr)) != EOF ) {
            printf("%c", c);
        }
        
        

    return 0;
}