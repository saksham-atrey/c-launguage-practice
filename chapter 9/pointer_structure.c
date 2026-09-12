#include <stdio.h>

struct employee
{
    int code; 
    float salary;
    char name[10];
}; 

int main(){
    
    struct employee e1;
    e1.code = 56;
    struct employee *ptr; //pointer of struct employee type
    ptr = &e1;

    printf("%d", ptr->code); // Same as writing printf("%d", (*ptr).code)

    return 0;
}