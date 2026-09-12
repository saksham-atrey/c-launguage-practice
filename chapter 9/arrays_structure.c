#include <stdio.h>
#include <string.h>
struct employee
{
 int code; // This declares a new user defined data type!
 float salary;
 char name[10];
};
int main(){
    struct employee facebook[100];
    facebook[0].code = 23;
    facebook[1].code = 45;
    facebook[0].salary = 78;
    strcpy(facebook[0].name,"saksham");
    printf("%d, %f, %d, %s", facebook[0].code, facebook[0].salary, facebook[1].code, facebook[0].name);
    return 0;
}


