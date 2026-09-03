/*Write a program to calculate the factorial of a given number using
 a for loop. */
#include <stdio.h>

int main()
{
    int i, n;
    int factorial = 1;
    printf("enter number ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }
    printf("%d", factorial);
    return 0;
}