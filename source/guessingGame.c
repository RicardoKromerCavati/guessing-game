#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    printf("*********************************\n");
    printf("* Welcome to our guessing game! *\n");
    printf("*********************************\n");


    int userGuess = 0;
    int attempt = 1;
    float points = 1000;
    
    int epochTimestampSeed = time(0);
    srand(epochTimestampSeed);
    int randomNumber = rand();
    int secretNumber = randomNumber % 100;

    while (1)
    {
        printf("Attempt %d\n", attempt);
        printf("Please enter your guess: ");
        scanf("%d", &userGuess);

        if (userGuess < 0)
        {
            printf("Your guess must be a positive number!\n\n");
            continue;
        }

        printf("Your guess was %d!\n\n", userGuess);

        int guessedCorrectly = secretNumber == userGuess;

        if (guessedCorrectly)
        {
            break;
        }

        attempt++;

        float lostPoints = abs((userGuess - secretNumber) / (double)2);
        points -= lostPoints;

        int isSecretNumberBiggerThanGuess = secretNumber > userGuess;

        if (isSecretNumberBiggerThanGuess)
        {
            printf("I'm sorry, you missed. Your guess is smaller than the secret number!\n");
            continue;
        }

        printf("I'm sorry, you missed. Your guess is bigger than the secret number!\n");
    }

    printf("Congratulations, you guessed it right on attempt number %d!\n", attempt);
    printf("Total points: %.1f!\n", points);
    printf("Game over.\n");

    return 0;
}