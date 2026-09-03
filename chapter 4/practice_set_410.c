#include <stdio.h>

int main()
{
    int n;
    int i;
    int t = 1;
    printf("enter number ");
    scanf("%d", &n);
    if (n > 1)
    {

        for (i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                t = 0;
                break;
            }
        }
    }
    else
    {
        t = 0;
    }
    if (t == 1)
    {
        printf("%d is a prime", n);
    }
    else
    {
        printf("%d is not a prime", n);
    }
    return 0;
}