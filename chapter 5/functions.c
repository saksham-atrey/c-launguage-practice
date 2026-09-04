#include <stdio.h>
int sum(int x, int y)
{
    // printf("the sum is %d\n ", x+y);
    return x + y;
}

int main()
{
    int a = 12;
    int b = 13;
    int c = sum(a, b);
    printf("%d\n", c);

    int a1 = 21;
    int b1 = 65;
    int c1 = sum(a1, b1);
    printf("%d\n", c1);
    int a3 = 43;
    int b3 = 78;
    int c3 = sum(a3, b3);
    printf("%d\n", c3);
    return 0;
}
