/*Write a program having a variable i . Print the address of i . Pass this variable to a
function and print its address. Are these addresses the same? Why?*/
#include <stdio.h>
void address(int a);
void address(int a){
    printf("address of a %p\n", &a);
}

int main(){
    int i = 56;
    printf("address of i %p\n", &i);
address(i);
    return 0;
}
//not same since function gets a copy of the variable
