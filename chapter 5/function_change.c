#include <stdio.h>

int change(int a);

int change(int a)
{
    a = 77; // Misnomer
    return 0;
}

int main()
{
    int b = 22;
    change(b);            // The value of b remains 22
    printf("b is %d", b); /*copy of b aka value of b (22 in this case)
                            is passed onto change function instead of
                            b variable itself*/

    return 0;
}