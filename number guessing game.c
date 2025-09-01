#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;

    // Seed the random number generator
    srand(time(0));
    number = rand() % 100 + 1;  // Random number between 1 and 100

    printf("🎲 Welcome to Number Guessing Game 🎲\n");
    printf("I have picked a number between 1 and 100.\n");
    printf("Can you guess it?\n\n");

    // Loop until guessed correctly
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > number) {
            printf("Too high! Try again.\n");
        } else if (guess < number) {
            printf("Too low! Try again.\n");
        } else {
            printf("🎉 Congratulations! You guessed it in %d attempts.\n", attempts);
        }

    } while (guess != number);

    return 0;
}
