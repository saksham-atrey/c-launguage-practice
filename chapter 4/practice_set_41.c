// Write a program to print multiplication table of a given number n
#include <stdio.h>

int main()
{
    int i = 1;
    int n;
    printf("enter n ");
    scanf("%d", &n);
    while (i <= 10)
    {
        printf("%d\n", n * i);
        i++;
    };
    return 0;
}