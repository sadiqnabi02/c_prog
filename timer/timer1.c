
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void timer(int seconds) {
    int remaining = seconds;

    printf("\r Timer started for %d seconds.\n", seconds);

    while (remaining > 0) {
        printf("\r Time remaining: %d seconds\n", remaining);
        sleep(1);
        remaining--;
    }

    printf("\r Time's up!\n");
}

int main() {
    int seconds;

    printf("Enter the number of seconds for the timer: ");
    scanf("%d", &seconds);

    timer(seconds);

    return 0;
}
