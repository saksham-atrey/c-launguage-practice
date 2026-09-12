//pass a structure to a function
#include <stdio.h>
 #include <string.h>
 struct employee
 {

    int code;
    float salary;
    char name[20];

 };
 void show (struct employee e);
 void show (struct employee e){
    printf("%d,%.2f,%s", e.code,e.salary,e.name);
 };

 int main(){
    struct employee harry = {2432, 7889.67, "harry"};
    show(harry);
    return 0;
 }