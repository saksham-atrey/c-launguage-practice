/*Write a program to store the details of 3 employees from user defined data.
 Use the structure declared above*/
 #include <stdio.h>
 #include <string.h>
 struct employee
 {

    int code;
    float salary;
    char name[20];

 };
 int main(){
    
    struct employee e1;
    printf("enter code: ");
    scanf("%d", &e1.code);

    printf("enter salary: ");
    scanf("%f", &e1.salary);

    printf("enter name: ");
    scanf("%s", &e1.name);

    printf("%d, %f, %s", e1.code,e1.salary,e1.name);
    
    return 0;
 }