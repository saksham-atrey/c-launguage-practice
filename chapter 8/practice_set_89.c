//Write a program to check whether a given character is present in a string or not
#include <stdio.h>
#include <string.h>
int main(){
    char str[] = "saksham";
    int j =0;
    for(int i =0; i<=strlen(str); i++){
        if(str[i]=='s'){
           j = 1;
           break;
        }
    }
    if(j==1){
        printf("s is present in the string");
    }else{
        printf("s is not present in the string");
    }
    return 0;
}