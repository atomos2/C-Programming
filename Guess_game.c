#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int guess, number, i;
    srand(time(0));
    number = rand() % 100;
    
    for (i = 1; i <= 10; i++)
    {
        printf("Guess the number:");
        scanf("%d", &guess);
        if (guess > number)
        {
            if (i == 10)
            {
                printf("Game over!!! You couldn't guess the number\n");
            }
            else
            {
                printf("Lower number please!!!\n");
                printf("%d attempts left\n", 10 - i);
            }
        }
        else if (guess < number)
        {
            if (i == 10)
            {
                printf("Game over!!!, You couldn't guess the number\n");
            }
            else
            {
                printf("Higher number please!!!\n");
                printf("%d attempts left\n", 10 - i);
            }
        }

        else
        {
            printf("Bingo!!! You have guessed the number in %d attempts\n", i);
            break;
        }
    }
}