//Write a program to read three integers from a file
#include <stdio.h>

int main(){
    FILE* ptr;
    int num1,num2,num3;
     ptr = fopen("practiceset101.txt", "r");
     fscanf(ptr, "%d %d %d", &num1, &num2, &num3 ); //format of format specifyer is important(%d %d)

     printf("%d,%d,%d", num1, num2, num3);
     fclose(ptr);
    return 0;
}