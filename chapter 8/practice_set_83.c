//Write your own version of strlen function from <string.h>
#include <stdio.h>
int strlen(char str[]);
int strlen(char str[]){
    int i = 0;
    while(str[i] != '\0'){
        i++;
    }
    return i;
}
#include <stdio.h>

int main(){
    char lol[5] = "bruh";
    printf("%d", strlen(lol));
    return 0;
}
    