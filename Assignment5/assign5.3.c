#include <stdio.h>

int main() {
    char str[200];
    int i, count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);   // reads string with spaces

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0') {
            count++;
        }
    }

    // If the string is not empty, number of words = spaces + 1
    if (str[0] != ' ' && str[0] != '\0')
        count++;

    printf("Number of words = %d\n", count);

    return 0;
}
