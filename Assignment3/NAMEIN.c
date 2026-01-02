#include <stdio.h>
int main() {
    int height = 7;
    int i, j;
    for(i = 0; i < height; i++) {
        //B
        for(j = 0; j < height/2 + 1; j++) {
            if(j == 0 || (i == 0 && j < height/2) || (i == height-1 && j < height/2) || 
               (i == height/2 && j < height/2) || (j == height/2 && i != 0 && i != height-1 && i != height/2))
                printf("*");
            else
                printf(" ");
        }
        printf("  ");
        //H
        for(j = 0; j < height/2 + 1; j++) {
            if(j == 0 || j == height/2 || i == height/2)
                printf("*");
            else
                printf(" ");
        }
        printf("  "); 
        //A
        for(j = 0; j < height/2 + 2; j++) {
            if((i == 0 && j > 0 && j < height/2+1) || (j == 0 && i > 0) || 
               (j == height/2+1 && i > 0) || (i == height/2))
                printf("*");
            else
                printf(" ");
        }
        printf("  ");
        //V
        for(j = 0; j < height; j++) {
            if((j == i && i <= height/2) || (j == height-i-1 && i <= height/2))
            printf("*");
            else{printf(" ");}
        }
        printf("  ");
        //I
        for(j = 0; j < 3; j++) {
            if(i == 0 || i == height-1 || j == 1)
                printf("*");
            else
                printf(" ");
        }
        printf("  ");
        //K
        for(j = 0; j < height/2 + 2; j++) {
            if(j == 0 || (i+j == height/2 && i < height/2) || 
               (i-j == height/2 && i >= height/2) || (i == height/2 && j <= 1))
                printf("*");
            else
                printf(" ");
        }
        printf("  ");
        //A
        for(j = 0; j < height/2 + 2; j++) {
            if((i == 0 && j > 0 && j < height/2+1) || (j == 0 && i > 0) || 
               (j == height/2+1 && i > 0) || (i == height/2))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    } 
    return 0;
}