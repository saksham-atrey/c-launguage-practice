// Number Guessing Game

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(NULL));

    int random_number = rand() % 100 + 1;
    int input;
    int i = 0;
    printf("please enter number ");
    do
    {
        scanf("%d", &input);
        if (input > random_number)
        {
            printf("lower number please\n");
        }
        else if (input < random_number)
        {
            printf("higher number please\n");
        }
        i += 1;
    } while (input != random_number);

    printf("you have guessed the number!, the number was %d, in %d tries!", random_number, i);

    return 0;
}
