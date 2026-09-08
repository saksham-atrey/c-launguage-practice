/*Write a function slice() to slice a string. It should change the original string such
that it is now the sliced string. Take m and n as the start and ending position for
slice*/
char* slice(char str[], int m, int n);
char* slice(char str[], int m, int n){
    str[n] = '\0'; //puts null charecter at the point where we want to end slice
    char*ptr = &str[m]; //stores address of the point where we want to start the slice
    str = ptr; //stores the slice in the original string 
return str;
}
#include <stdio.h>

int main(){
    char name[] = "saksham";
    printf("%s", slice(name, 2, 6)); //%s needs a pointer to the first character of the string
    return 0;
}