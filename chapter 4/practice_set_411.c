// Implement 10 using other types of loops
/*#include <stdio.h>

int main()
{
    int n;
    int i = 2;
    int t = 1;
    printf("enter number ");
    scanf("%d", &n);
    if (n > 1)
    {
        while (i * i <= n)
        {

            if (n % i == 0)
            {
                t = 0;
                break;
            }
            i++;
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
}*/

#include <stdio.h>

int main()
{
    int n;
    int i = 2;
    int t = 1;
    printf("enter number ");
    scanf("%d", &n);
    if (n > 1)
    {
        do
        {
            if (n == 2)
            {
                break;
            }
            if (n % i == 0)
            {
                t = 0;
                break;
            }
            i++;
        } while (i * i <= n);
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