/*Take name and salary of two employees as input from the user and write them to a
text file in the following format:
i. Name1, 3300
ii. Name2, 7700
*/
#include <stdio.h>
#include <string.h>
typedef struct employee
{
 char name[20];
 int salary;
}emp ;
int main(){
    FILE* ptr;
    ptr = fopen("practiceset104.txt", "w");

    if (ptr == NULL) {
    printf("Could not open file.");
    return 0;

} else{
    int sal, sal2;
    char nam[20], nam2[20];
    printf("enter name 1: ");
    scanf("%s", &nam);
    printf("enter salary 1: ");
    scanf("%d", &sal);

    printf("enter name 2: ");
    scanf("%s", &nam2);
    printf("enter salary 2: ");
    scanf("%d", &sal2);

emp list[2];

strcpy(list[0].name, nam );
list[0].salary = sal;

strcpy(list[1].name, nam2);
list[1].salary = sal2;

fprintf(ptr, "Name of employee 1 is %s, ", list[0].name);
fprintf(ptr, "Salary of employee 1 is %d\n", list[0].salary);

fprintf(ptr, "Name of employee 2 is %s, ", list[1].name);
fprintf(ptr, "Salary of employee 2 is %d\n", list[1].salary);

fclose(ptr);
    return 0;
}
}