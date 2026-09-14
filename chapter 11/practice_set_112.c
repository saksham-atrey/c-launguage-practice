//Use the array in Problem 1 to store 6 integers entered by the user
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *)malloc(6 * sizeof(int));
    for (int i = 0; i < 6; i++)
    {
       scanf("%d", &ptr[i]);
    };
    for (int j = 0; j < 6; j++)
    {
        printf("%d ", ptr[j]);
    }

    return 0;
}