#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between 0 and RAND_MAX
    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed;

    // Print the random number
    // printf("Random number: %d\n", randomNumber);
    do
    {
        printf("Guess the number ");
        scanf("%d", &guessed);
        if (guessed > randomNumber)
        {
            printf("Lower number please!\n");
        }
        else if (guessed < randomNumber)
        {
            printf("higher number please!\n");
        }
        else
        {
            printf("CONGRATULATIONS!!!!!!\n");
        }

        no_of_guesses++;
    } while (guessed != randomNumber);

    printf("You guessed the number in %d guesses", no_of_guesses);

    return 0;
}
