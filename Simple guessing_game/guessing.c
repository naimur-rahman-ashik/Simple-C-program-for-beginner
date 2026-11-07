#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int user_input, random;
    int no_of_input = 0;
    srand(time(NULL)); 

    printf("***Welcome to the world of Guessing Numbers***\n");
    random = rand() % 100 + 1; 

    do
    {
        printf("\nGuess a number between (1 to 100): ");
        scanf("%d", &user_input);
        no_of_input++;

        if(user_input < random)
        {
            printf("Enter a larger number\n");
        }
        else if(user_input > random)
        {
            printf("Enter a smalller number\n");
        }
        else
        {
            printf("\nCongratulation, You have guessed the number at %d attempts!!\n", no_of_input);
        }

    }
    while(user_input != random);

    printf("\nBye Bye, Thanks for playing");
    printf("\nDevoloped by: Ashik");

    return 0;

}

