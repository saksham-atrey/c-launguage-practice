/*Write a program to calculate the factorial of a given number using
a while loop*/
#include <stdio.h>

int main()
{
    int i = 1;
    int n;
    int factorial = 1;
    printf("enter number ");
    scanf("%d", &n);
    while (i <= n)
    {
        factorial = factorial * i;

        i++;
    }
    printf("%d", factorial);
    return 0;
}