#include <stdio.h>

int main(){
    char st[5]; // One extra for null character
    scanf("%s", st);
    printf("%s", st);
    return 0;
}
//scanf cannot be used to input multi-word strings with spaces