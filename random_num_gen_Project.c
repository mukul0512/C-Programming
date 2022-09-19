#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num, guess, numGuesses = 1;
    srand(time(0));
    num = rand() % 100 + 1; // Generates a random number between 1 and 100
    // Keep running the loop until the number is guessed
    do
    {
        printf("Guess the number between 1 to 100\n");
        scanf("%d", &guess);
        if (guess > num)
        {
            printf("Lower number please!\n");
        }
        else if (guess < num)
        {
            printf("Higher number please!\n");
        }
        else
        {
            printf("The number is %d\n", num);
            printf("You guessed it in %d attempts\n", numGuesses);
        }
        numGuesses++;

    } while (guess != num);

    return 0;
}