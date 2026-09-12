#include <stdio.h>

int main(){
    int a = 3;
    printf("%d\n", a);

    typedef int num; //creates a new data type num which is the same as int 
    num b = 3;
printf("%d\n", b);
    return 0;
}