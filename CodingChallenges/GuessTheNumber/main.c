#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int userGuess = 0;
    int count = 5;
    time_t t;

    //Intialization of random number generator
    srand((unsigned) time(&t));

    //get the random number
    int randomNumber = rand() % 21;

    printf("This is a guessing game.\n");
    printf("I have chosen a number between 0 and 20 which you must guess.\n");

    while (count > 0){
        printf("\n\n\nYou have %d tr%s left.\n", count, count == 1 ? "y" : "ies");
        printf("Enter a guess: ");
        scanf("%d", &userGuess);

        if(userGuess >= 0 && userGuess <= 20){

            if (userGuess == randomNumber){
                printf("\nCongratulations. You guessed it");
                return 0;
            }else if (userGuess > randomNumber){
                printf("\nSorry, %d is wrong. My number is less than that.\n", userGuess);
            }else if (userGuess < randomNumber){
                printf("\nSorry, %d is wrong. My number is greater than that.\n", userGuess);
            }
        }else {
            printf("\nValue entered is invalid. Try again.\n");
        }

        count--;

    }
    printf("\nYou have had 5 tries and failed. The number was %d.\n", randomNumber);

    return 0;
}
