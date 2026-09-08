#include <stdio.h>

int main(){
    char st[] = {'b', 'r', 'u', 'h', '\0' }; // A String
                                                    /*'\0' is null character (necessary for 
                                                       creation of string)*/
    for (int i = 0; i <4 ; i++)          
    {
        printf("charecter is %c \n", st[i]);
        
    }
    //OR
    /*char st[] = "bruh";
    for (int i = 0; i <4 ; i++)
    {
        printf("charecter is %c \n", st[i]);
        
    }
    return 0;*/
}
