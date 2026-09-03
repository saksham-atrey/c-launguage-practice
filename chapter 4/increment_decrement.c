//i++/++i is the same as writing i=i+1
#include <stdio.h>

int main()
{
    int i = 0;

    printf("%d\n", i);

    printf("%d\n", ++i); //(increments then prints)

    printf("%d\n", i++); //(prints and then increments)

    printf("%d\n", i); //(prints the incremented i)

    i = i+=2;
    printf("%d\n", i); // same as i = i+2
    return 0;
}
//++i increments first then prints(Pre-Increment Function)
//i++ prints first then in increments (Post-Increment Function)
