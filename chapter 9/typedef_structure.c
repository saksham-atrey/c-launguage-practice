#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[20];
};
int main(){
    typedef struct employee emp; /*creates a new data type emp which is the same as struct 
                                  employee*/
    emp e1;  //e1 defined using emp datatype
    e1.code = 3454;
    e1.salary = 789.02;
    strcpy(e1.name, "saksham");

    printf("%d,%.2f,%s", e1.code, e1.salary, e1.name );
    return 0;
}