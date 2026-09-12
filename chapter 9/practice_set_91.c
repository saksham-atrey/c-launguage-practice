//Create a two-dimensional vector using structures in C
#include <stdio.h>
typedef struct vector 
{
    int i;
    int j;

} vector;

int main(){
    vector v1 = {50,25};
    
    printf("the value of the vector is %di+%dj ", v1.i,v1.j);
    return 0;
}