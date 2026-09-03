// Write a program to sum first ten natural numbers using while loop
#include <stdio.h>

int main()
{
    int n = 1;
    int j = 0;
    while (n <= 10)
    {
        j = j + n;
        n++;
    }
    printf("%d\n", j);
    return 0;
}