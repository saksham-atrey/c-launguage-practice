#include <stdio.h>

int main()
{
    char ch;
    FILE *ptr;
    ptr = fopen("fgetfput.txt", "r");
    char c = 'a';
    if (ptr == NULL)
    {
        printf("the file couldn't be openend");
    }
    else
    {
        while (c != EOF)
        {
            c = fgetc(ptr);
            printf("%c", c);
        }
        fclose(ptr);
    }
    return 0;
}