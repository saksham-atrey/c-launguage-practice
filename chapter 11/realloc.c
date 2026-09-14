/*Sometimes the dynamically allocated memory is insufficient or more than required.
 realloc is used to allocate memory of new size using the previous pointer and size*/
#include <stdio.h>
#include <stdlib.h> 
int main(){
    int* ptr;  
ptr = (int*)malloc(2*sizeof(int)); 
ptr[3] = 8; //c puts value in this location but doesn't actually expand the allocated memory
printf("%d\n", ptr[2]); //returns garbage value
ptr = realloc(ptr, 3*sizeof(int));
ptr[2] = 8;
printf("%d", ptr[2]); //returns correct value
return 0;
}