#include <stdio.h>

int main()
{
    char st[30];
    gets(st); // same as scanf but for muli-word strings with spaces

     puts(st); // same as printf("%s\n", st)
    printf("hey");

    return 0;
}
//GETS HAS BEEN REMOVED ACCORDING TO THE C11 STANDARD, DO NOT USE ONLY USE FGETS