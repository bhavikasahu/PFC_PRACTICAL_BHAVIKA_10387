#include <stdio.h>

int main() {
    int x, result1, result2;

    x = 5;
    result1 = ++x;   // Pre-increment

    printf("After pre-increment:\n");
    printf("x = %d\n", x);
    printf("result1 = %d\n\n", result1);

    x = 5;
    result2 = x++;   // Post-increment

    printf("After post-increment:\n");
    printf("x = %d\n", x);
    printf("result2 = %d\n", result2);

    return 0;
}
