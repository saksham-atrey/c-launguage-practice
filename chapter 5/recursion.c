#include <stdio.h>

int factorial(int);

int factorial(int n)
{
    if (n == 1 || n == 0)
    { // Base condition
        return 1;
    }
    // Factorial(n) = Factorial(n-1) X n
    return n * factorial(n - 1); /*factorial(n-1) puts n-1 back into
                                  the factorial function thus creating a
                                  loop until it reaches 1(base condition)*/
}
int main()
{
    int a;
    printf("enter number ");
    scanf("%d", &a);
    printf("The factorial of %d is %d", a, factorial(a));
    return 0;
}