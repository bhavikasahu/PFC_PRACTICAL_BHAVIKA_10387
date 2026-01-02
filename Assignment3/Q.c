#include <stdio.h>
int main() {
    int i, j;
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 6; j++) {
            if (i == 0 && j > 0 && j < 5)
                printf("*");
            else if (i == 6 && j > 0 && j < 5)
                printf("*");
            else if (j == 0 && i > 0 && i < 6)
                printf("*");
            else if (j == 5 && i > 0 && i < 6)
                printf("*");
            else if (i == 5 && j == 3)
                printf("*");
            else if (i == 7 && j == 4)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}