#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[20];
};
int main(){
    struct employee e1;     // Same as writing - struct employee e1 = {3454,789.02,"saksham"}
    e1.code = 3454;
    e1.salary = 789.02;
    strcpy(e1.name, "saksham");

    printf("%d,%.2f,%s", e1.code, e1.salary, e1.name );
    return 0;
}
