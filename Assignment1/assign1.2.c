#include <stdio.h>

int main() {
    int a, b;

    printf("Enter first integer: ");
    scanf("%d", &a);

    printf("Enter second integer: ");
    scanf("%d", &b);

    printf("\nAddition: %d + %d = %d", a, b, a + b);
    printf("\nSubtraction: %d - %d = %d", a, b, a - b);
    printf("\nMultiplication: %d * %d = %d", a, b, a * b);

    if (b != 0) {
        printf("\nDivision: %d / %d = %d", a, b, a / b);
        printf("\nModulus: %d %% %d = %d", a, b, a % b);
    } else {
        printf("\nDivision and Modulus are not possible (division by zero).");
    }

    return 0;
}
