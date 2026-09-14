#include <stdio.h>
#include <stdlib.h> //necessary for DMA functions
int main(){
    int n;
    int* ptr; //creating an array of size given by the user
    scanf("%d", &n); //arr[n] is not allowed in C language 
ptr = (int*)malloc(n*sizeof(int)); 
                         /* malloc() --> returns void type pointer
                            (int*) --> gives int type to pointer returned by malloc
                             n*sizeof(int) --> mutiplies byte size of int variable
                            by n to allocate memory for n integers in pointer array */ 
 ptr[0] = 5;
 ptr[1] = 2;
 printf("%d", ptr[1]);

  return 0;
}
/*malloc stands for memory allocation. It takes number of bytes to be allocated as
 an input and returns a pointer of type void*/
