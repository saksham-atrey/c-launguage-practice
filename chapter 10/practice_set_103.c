/*Write a program to read a text file character by character and write its content twice in
separate file*/
#include <stdio.h>

int main(){
    FILE* ptr;
    FILE* ptr2;
    ptr = fopen("practiceset103.txt", "r");
    ptr2 = fopen("practiceset103_2.txt", "w");
    if(ptr ==NULL || ptr2 ==NULL){
        printf("couldn't open file");
    }else{
        while(1){
         char a = fgetc(ptr);
         if(a == EOF){
            break;}
            
           fprintf( ptr2, "%c", a);
           fprintf( ptr2, "%c", a);

           
        }
    }
    return 0;
}