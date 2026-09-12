#include <stdio.h>

int main(){
    FILE* ptr;
    ptr = fopen("fgetfput.txt", "r");

    char c = fgetc(ptr); //fgetc only reads one character
    printf("%c", c); 

    fclose(ptr);

   ptr = fopen("fgetfput.txt", "a");
   fputc('L', ptr); //fputc only puts one character into the file

   fclose(ptr);

    return 0;
}