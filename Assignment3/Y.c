#include <stdio.h>
int main() {
    int i, j;
    for (i = 0; i < 7; i++) {
        for (j = 0; j < 7; j++) {
            if (i == j && i < 3)
                printf("*");
            else if (i + j == 6 && i < 3)
                printf("*");
            else if (j == 3 && i >= 3)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}