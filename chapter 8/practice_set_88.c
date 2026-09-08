//Write a program to count the occurrence of a given character in a string
#include <stdio.h>
#include <string.h>
int main(){
    char str[] = "saksham";
    int j =0;
    for(int i =0; i<=strlen(str); i++){
        if(str[i]=='a'){
           j++;
        }
    }
    printf("the number of a in the string is %d", j);
    return 0;
}