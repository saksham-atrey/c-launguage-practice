#include <stdio.h>

int main(){
    char st[] = "bruh"; // Same as writing {'b', 'r', 'u', 'h', '\0' };
    
    printf("%s", st); /* Same as writing  for (int i = 0; i <4 ; i++){ 
                                          printf("charecter is %c \n", st[i]);
                                          }*/
    return 0;
}