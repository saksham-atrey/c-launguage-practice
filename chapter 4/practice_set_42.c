// Write a program to print multiplication table of 10 in reversed order
#include <stdio.h>

int main()
{
    int i = 10;
    int n;
    printf("enter n ");
    scanf("%d", &n);
    while (i >= 1)
    {
        printf("%d times %d is %d\n", n, i, n * i);
        i--;
    };
    return 0;
}