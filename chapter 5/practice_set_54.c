/*Write a program using recursion to calculate nth
element of Fibonacci series*/
// fibonacci series = 0 1 1 2 3 5 8 13 21 34..
//  basic logic Fn = Fn-1 + Fn-2
#include <stdio.h>
int fib(int a);
int fib(int a)
{
    if (a == 2)
    {
        return 1;
    }
    else if (a == 1)
    {
        return 0;
    }
    else
    {
        return fib(a - 2) + fib(a - 1);
    }
}
int main()
{
    int n = 0;
    printf("the fibonacci element on %d is %d ", n, fib(n));
    return 0;
}