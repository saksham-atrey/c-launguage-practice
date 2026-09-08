//Write a program to decrypt the string encrypted using encrypt function in problem 6
char* decrypt(char str[]);
char* decrypt(char str[]){
    for(int i = 0; str[i]!= '\0'; i++){
    str[i] = str[i] - 1;
    }
    return str;
}
#include <stdio.h>

int main(){
    char name[] = "tbltibn";
    decrypt(name);
    printf("%s", name);
    return 0;
}