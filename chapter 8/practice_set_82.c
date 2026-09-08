/*Write a program to take string as an input from the user using %c and %s and
confirm that the strings are equal*/
#include <stdio.h>
#include <string.h>
int main(){
    char str[6];
    char str1[6];
    for (int i = 0; i < 5; i++)
    {
        scanf("%c", &str[i]); 
        fflush(stdin); /* Entering an input also puts in a null character, to avoid this 
                         null character is removed (flushed)*/
    } 
    str[5] = '\0'; //adding null character at the end 
    gets(str1);
    printf("%s\n", str);
    printf("%s\n", str1);

    printf("%d", strcmp(str,str1)); //0 means strings are equal

    return 0;
}
