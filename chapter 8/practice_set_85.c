//Write your own version of strcpy function from <string.h>
#include <stdio.h>
char *strcy(char str1[], char str2[]);
char* strcy(char str1[], char str2[]){
    int i;

    for (i = 0; str1[i] != '\0'; i++) {
        str2[i] = str1[i];
    }
    str2[i] = '\0';

    return str2;
}
int main()
{
    char name[] = "saksham";
    char name2[8];
    strcy(name, name2);
    printf("%s", name2);
    return 0;
}