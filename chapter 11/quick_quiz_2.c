/*Write a program to create an array of size n using calloc where n is an integer
entered by the user*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    int* ptr;
    printf("enter number: ");
    scanf("%d", &n);
    ptr = (int*)calloc(n, sizeof(float));

    ptr[0] = 3; 
    printf("%d", ptr[0]);
    return 0;
}
/*calloc stands for continuous allocation. It initializes each memory block with a 
default value of 0*/
