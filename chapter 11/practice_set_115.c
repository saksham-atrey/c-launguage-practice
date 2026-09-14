/*Create an array of multiplication table of 7 up to 10 (7 × 10 = 70). Use realloc 
so that it can store the multiplication table up to 15 (7 × 15 = 105)*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int* ptr;
    ptr = (int*)malloc(10*sizeof(int));
    for (int i = 0; i < 10; i++)
    {
       ptr[i] = 7*(i+1);
    }

    ptr = realloc(ptr, 15*sizeof(int));
    for (int j = 0; j < 15; j++)
    {
       ptr[j] = 7*(j+1);
    }
    return 0;
}