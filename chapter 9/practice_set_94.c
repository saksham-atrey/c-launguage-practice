//Write a program to illustrate the use of arrow operator -> in C
#include <stdio.h>
typedef struct emp
{
    int code;
    float salary;
}employee;

int main(){
    employee e1;
    employee* ptr = &e1;
    ptr->code = 34; //(*ptr).code = 34
    ptr->salary = 756.8; //(*ptr).salary = 756.8
    printf("%d, %.2f", ptr->code, ptr->salary);
    return 0;
}
