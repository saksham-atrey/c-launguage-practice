#include <stdio.h>

int main()
{
    int n = 1;
    int j;
    printf("number ");
    scanf("%d", &j);
    if (j > 0)
    {
        do
        {
            printf("%d\n", n);
            n++;
        } while (n <= j);
    }
    else
    {
        printf("please enter a number greater than 0");
    }
    return 0;
}