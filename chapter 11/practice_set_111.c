/*Write a program to dynamically create an array of size 6 capable of storing
6 integers*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *)malloc(6 * sizeof(int));
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