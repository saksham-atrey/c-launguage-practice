//Write a program to modify a file containing an integer to double its value
#include <stdio.h>

int main(){
    FILE* ptr;
    int n;
    ptr = fopen("practiceset105.txt", "r");
    if(ptr == NULL){

        printf("file could not be opened");
        return 0;
    }else{
    fscanf(ptr, "%d", &n );

    fclose(ptr);

    ptr = fopen("practiceset105.txt", "w");
    n = n*2;
    fprintf(ptr,"%d", n);
    
    return 0;
    }
}