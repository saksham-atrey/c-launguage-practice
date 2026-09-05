/*Write a program to print the address of a variable. Use this address to get the value of
the variable.*/
#include <stdio.h>

int main(){
    int i = 4;
    int* j = &i;
    //address of i-
    printf("address of i is %p\n", &i);
    printf("adress of i is %p\n", j);
    //value of i-
    printf("value of i is %d\n", i);
    printf("value of i is %d\n", *(&i));
    printf("value of i is %d\n", *j);
    return 0;
}