//Solve Problem 1 using calloc() 
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *)calloc(6, sizeof(int));
    for (int i = 0; i < 6; i++)
    {
        ptr[i] = i;
    };
    for (int j = 0; j < 6; j++)
    {
        printf("%d\n", ptr[j]);
    }

    return 0;
}