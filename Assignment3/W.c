#include <stdio.h>
int main() {
    int height = 7;
    int i, j;
    for(i = 0; i < height; i++) {
        for(j = 0; j <= height * 2; j++) {
            if(j == 0 ||  
               j == height * 2 ||  
               (i >= height/2 && (i + j == height ||  
                                  j - i == height ||  
                                  (i == height/2 && j == height)))) {  
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}