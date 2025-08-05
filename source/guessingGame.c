#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    printf("*********************************\n");
    printf("* Welcome to our guessing game! *\n");
    printf("*********************************\n");

    int difficultyLevel;
    int maximumAttemptCount = 5;
    printf("What is the difficulty level you would like to play on?\n");
    printf("1 (easy).\n");
    printf("2 (medium).\n");
    printf("3 (hard).\n");
    printf("Choose: ");
    scanf("%d", &difficultyLevel);

    switch (difficultyLevel)
    {
    case 1:
        maximumAttemptCount = 15;
        break;
    case 2:
        maximumAttemptCount = 10;
        break;
    default:
        maximumAttemptCount = 5;
        break;
    }

    int userGuess = 0;
    int attempt = 1;

    float points = 1000;
    int guessedCorrectly = 0;

    int epochTimestampSeed = time(0);
    srand(epochTimestampSeed);
    int randomNumber = rand();
    int secretNumber = randomNumber % 100;

    for (int i = 1; i <= maximumAttemptCount; i++)
    {
        printf("Attempt %d of %d\n", attempt, maximumAttemptCount);
        printf("Please enter your guess: ");
        scanf("%d", &userGuess);

        if (userGuess < 0)
        {
            printf("Your guess must be a positive number!\n\n");
            continue;
        }

        printf("Your guess was %d!\n\n", userGuess);

        guessedCorrectly = secretNumber == userGuess;

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

    printf("Game over.\n");

    if (guessedCorrectly)
    {
        printf("Congratulations, you guessed it right on attempt number %d!\n", attempt);
        printf("Total points: %.1f!\n", points);
        return 0;
    }

    printf("You lost. try again!\nThe secret number was %d\n", secretNumber);

    return 0;
}