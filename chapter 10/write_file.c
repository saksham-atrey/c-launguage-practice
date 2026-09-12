#include <stdio.h>

int main(){ 
    FILE *ptr;  //file pointer
    ptr = fopen("number.txt", "w");  /*write mode (w) deletes everything in the file 
                                       before writing*/
    int num = 45;
    fprintf(ptr, "%d\n", num);
   fclose(ptr); 

   ptr = fopen("number.txt", "a" ); /*append mode (a) writes in the file without deleting 
                                     anything*/
       int num1 = 67;
       fprintf(ptr, "%d\n", num1 );
       fclose(ptr);                              
    return 0;
}
