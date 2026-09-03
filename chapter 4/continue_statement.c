#include <stdio.h>

int main()
{
    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            continue; /*The 'continue' statement is used to immediately
                       move to the next iteration of the loop, skipping
                       everything below "continue" inside the loop for
                       that iteration. */
        }
        printf("%d\n", i);
    }
    return 0;
}