#include <stdio.h>

int main(){ 
    FILE *ptr;  //file pointer
    ptr = fopen("harry.txt", "r"); //format for creating a file
    int num;
    fscanf(ptr, "%d", &num);  //file eqvivalent of scanf
    printf("%d\n", num);
                              //file pointer moves ahead in the file as you keep reading
    fscanf(ptr, "%d", &num);
    printf("%d\n", num);

   fclose(ptr); //close the file

    return 0;
}
