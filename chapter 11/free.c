#include <stdio.h>
#include <stdlib.h>
int main(){
    int* ptr;
    ptr = (int*)calloc(5, sizeof(float));
    ptr[0] = 3; 

    printf("%d\n", ptr[0]);

    free(ptr); //frees memory occupied by ptr

    printf("%d", ptr[0]);

    return 0;
}