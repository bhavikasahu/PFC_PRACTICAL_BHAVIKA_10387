#include <stdio.h>
int main() {
    float balance, interest, maintenance, bonusFactor;
    
    printf("Enter initial account balance: ");
    scanf("%f", &balance);
    printf("Enter interest amount to add: ");
    scanf("%f", &interest);
    printf("Enter annual maintenance charge: ");
    scanf("%f", &maintenance);
    printf("Enter bonus factor (e.g., 1.1 for 10%% bonus): ");
    scanf("%f", &bonusFactor);

    balance += interest;
    printf("Balance after adding interest: %.2f\n", balance);
    balance -= maintenance;
    printf("Balance after deducting maintenance: %.2f\n", balance);
    balance *= bonusFactor;
    printf("Balance after applying bonus factor: %.2f\n", balance);
    balance /= 2;

    printf("Balance after dividing into two accounts: %.2f\n", balance);
    return 0;
}
