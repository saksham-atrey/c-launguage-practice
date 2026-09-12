/*Write a program to generate multiplication table of a given number in text format.
Make sure that the file is readable and well formatted*/
#include <stdio.h>

int main(){
    FILE* ptr;
    ptr = fopen("practiceset102.txt", "w");
    int num;
    printf("enter number: ");
    scanf("%d", &num );
        for(int i = 0; i<=10; i++){
            int table = num*i;
            fprintf(ptr, "%d times %d is %d\n", num,i,table);
        }
    
    return 0;
}