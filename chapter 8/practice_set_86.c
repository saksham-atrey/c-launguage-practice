//Write a program to encrypt a string by adding 1 to the ASCII value of its character
char* encrypt(char str[]);
char* encrypt(char str[]){
    for(int i = 0; str[i]!= '\0'; i++){
    str[i] = str[i] + 1;
    }
    return str;
}
#include <stdio.h>

int main(){
    char name[] = "saksham";
    encrypt(name);
    printf("%s", name);
    return 0;
}