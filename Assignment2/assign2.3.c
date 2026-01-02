#include <stdio.h>
#include <string.h>
int main() {
    char correctUsername[] = "admin";
    char correctPassword[] = "1234";

    char username[20];
    char password[20];

    printf("Enter username: ");
    scanf("%s", username);

    printf("Enter password: ");
    scanf("%s", password);

    if (strcmp(username, correctUsername) == 0 && strcmp(password, correctPassword) == 0) {
        printf("Login Successful.\n");
    }
    else if (strcmp(username, correctUsername) != 0 || strcmp(password, correctPassword) != 0) {
        printf("Invalid Login.\n");
    }
    return 0;
}
