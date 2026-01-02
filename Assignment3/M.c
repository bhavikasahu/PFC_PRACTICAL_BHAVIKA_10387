#include <stdio.h>
int main() { 
    int i, j;
    for(i = 0; i < 7; i++) {
        for(j = 0; j <= 7; j++) {
            if(j == 0) {
                printf("*");
            }
            else if(j == i && i <= 7/2) {
                printf("*");
            }
            else if(j == 7 - i && i <= 7/2) {
                printf("*");
            }
            else if(j == 7) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}