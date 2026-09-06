#include <stdio.h>
// an integer takes 4 bytes of storage
// a char takes 1 byte of storage
int main(){
    int a = 5;
    int* ptr = &a;
    printf("the adress of a is %u\n", &a);
    printf("the address of a is %u\n", ptr);
    ptr++ ; //ptr = ptr + 1
    printf("the value of ptr is %u\n", ptr); /*value of pointer increases acccording to the 
                                               amount of storage its type variable takes i.e
                                               int pointer increases by 4, char pointer 
                                               increases by 1 etc.*/
    printf("\n");
    char b = 'A';
    char* ptr2 = &b;
    printf("the adress of b is %u\n", &b);
    printf("the address of b is %u\n", ptr2);
    ptr2++ ;
    printf("the value of ptr2 is %u\n", ptr2);

       return 0;                                  
}