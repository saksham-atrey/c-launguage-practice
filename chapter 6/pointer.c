#include <stdio.h>

int main()
{
    int i = 45;
    int *j = &i; // j is a pointer pointing to i
    printf("Address of i is %p\n", &i);
    printf("Adress of i is %p\n", j);
    printf("value of i is %d\n", *(&i)); /* *(&i) value of data stored at address of i (variable stored in i)*/
    printf("value of i is %d\n", *j);  
    printf("Address of j is %p\n", &j );
    return 0;
}
