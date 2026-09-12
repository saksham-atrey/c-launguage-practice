#include <stdio.h>

int main(){ 
    FILE *ptr;  //file pointer
    ptr = fopen("harry2.txt", "r"); // r is for read mode
    if(ptr==NULL){
        printf("file does not exist");
    }else{
    int num;
    fscanf(ptr, "%d", &num);  
    printf("%d\n", num);
                              
    fscanf(ptr, "%d", &num);
    printf("%d\n", num);
    }
    fclose(ptr);
    return 0;
}