#include <stdio.h>

int main()
{
    char ch;
    FILE *ptr;
    ptr = fopen("fgetfput.txt", "r");
    if (ptr == NULL)
    {
        printf("the file couldn't be openend");
        return 0;
    }
    else
    {
        while (1)
        {
            ch = fgetc(ptr);
            printf("%c", ch);

            if (ch == EOF) /*fgetc returns EOF when all the characters from a file have been read. So, we can write a check like
                     below to detect end of file*/
            {
                break; // when all the content of a file has been read break the loop
            }
        }
    }
    return 0;
}