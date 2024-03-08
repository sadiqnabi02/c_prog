#include <stdio.h>

int main() {
    int number, range;

    // Get input from user
    printf("Enter the number for the multiplication table: ");
    scanf("%d", &number);

    printf("Enter the range for the multiplication table: ");
    scanf("%d", &range);

    // Print the multiplication table
    printf("\nMultiplication Table for %d up to %d:\n", number, range);
    for (int i = 0; i <= range; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}
