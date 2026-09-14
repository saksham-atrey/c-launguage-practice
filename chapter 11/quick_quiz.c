/*Write a program to create a dynamic array of 5 floats using malloc()*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    float* ptr;
    ptr = (float*)malloc(5*sizeof(float));
    ptr[0] = 10;
    ptr[1] = 9;
    ptr[2] = 8;
    ptr[3] = 7;
    ptr[4] = 6;
printf("%.2f", ptr[1]);
    
    return 0;
}
