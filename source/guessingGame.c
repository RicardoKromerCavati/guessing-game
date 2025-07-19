#include <stdio.h>

#define MAX_ATTEMPT_NUMBER 5

int main()
{
    int userGuess = 0;
    int secretNumber = 42;

    printf("*********************************\n");
    printf("* Welcome to our guessing game! *\n");
    printf("*********************************\n");

    for (int i = 1; i <= MAX_ATTEMPT_NUMBER; i++)
    {
        printf("Attempt %d of %d\n", i, MAX_ATTEMPT_NUMBER);
        printf("Please enter your guess: ");
        scanf("%d", &userGuess);

        printf("Your guess was %d!\n", userGuess);

        int guessedRight = secretNumber == userGuess;

        if (guessedRight)
        {
            printf("Congratulations, you guessed it right!\n");
            break;
        }

        printf("I'm sorry, you missed. ");

        int isSecretNumberBiggerThanGuess = secretNumber > userGuess;

        if (isSecretNumberBiggerThanGuess)
        {
            printf("Your guess is smaller than the secret number!\n");
            continue;
        }

        printf("Your guess is bigger than the secret number!\n");
    }

    printf("Game over.\n");

    return 0;
}