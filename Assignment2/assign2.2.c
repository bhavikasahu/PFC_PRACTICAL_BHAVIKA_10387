#include <stdio.h>

int main() {
    float balance1, balance2;

    printf("Enter first account balance: ");
    scanf("%f", &balance1);

    printf("Enter second account balance: ");
    scanf("%f", &balance2);

    int isEqual = (balance1 == balance2);     
    int firstGreater = (balance1 > balance2);   
    int secondGreater = (balance2 > balance1);  

    printf("\nBoth balances equal       : %d\n", isEqual);
    printf("First balance greater      : %d\n", firstGreater);
    printf("Second balance greater     : %d\n", secondGreater);

    return 0;
}
