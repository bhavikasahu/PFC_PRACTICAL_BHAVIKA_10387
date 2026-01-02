#include <stdio.h>

int main() {
    int i, j;
    int height = 7;
    int width = (2 * 7) - 1;
    int middle = width / 2;

    for (i = 0; i < height; i++) {
        for (j = 0; j < width; j++) {
            if (j == middle - i || j == middle + i || (i == height/2 && j > middle - i && j < middle + i)){
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}