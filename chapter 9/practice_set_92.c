/*Write a function sumVector which returns the sum of two vectors passed to it. The
vectors must be two-dimensional*/

#include <stdio.h>

struct vector 
{
    int i;
    int j;

} ;
//using this structure all the vectors in the programm will be defined

struct vector sum(struct vector v1, struct vector v2)
{
   struct vector result;

    result.i = v1.i + v2.i;
    result.j = v1.j + v2.j;

    return result;
}
    

int main(){
    struct vector v1 = {10,15};
    struct vector v2 = {20, 30};
     struct vector resultant = sum(v1,v2);
    printf("%d, %d", resultant.i, resultant.j );
        return 0;
}