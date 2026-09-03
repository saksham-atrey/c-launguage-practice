// Write a program to calculate the sum of the numbers occurring in the multiplication table of 8
#include <stdio.h>

int main()
{
    int n = 1;
    int sum = 0;
    while (n <= 10)
    {
        sum = sum + 8 * n; // sum+= 8*n also means same
        n++;
    }
    printf("%d", sum);
    return 0;
}