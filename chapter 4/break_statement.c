#include <stdio.h>

int main()
{
    for (int i = 0; i < 100; i++)
    {
        printf("%d\n", i);
        if (i == 5)
        {
            break; /*The 'break' statement is used to exit the
             loop irrespective of whether the condition is true
              or false*/
        }
    }
    return 0;
}