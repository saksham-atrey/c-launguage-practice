//Write a program to determine whether a character entered by the user is lowercase 
//https://www.ascii-code.com/
#include <stdio.h>

int main() {
    char c;
    printf("enter your charecter ");
    scanf("%c", &c);
    if(c>='A' && c<='Z'){
        printf("Your character is upper case");
    }
    else{
        printf("your character is lower case");
    }
    return 0;
}