#include <stdio.h>

int main() {
    char str[100]; // Assuming a maximum length of 100 characters for the string
    int count = 0;

    // Input a string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count characters in the string
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] != '\n' && str[i] != '\0') {
            count++;
        }
    }

    // Display the result
    printf("Number of characters in the string: %d\n", count);

    return 0;
}

