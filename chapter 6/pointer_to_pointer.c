#include <stdio.h>

int main(){
    int i = 72; //(variable i)
    int* j = &i; //(address of variable i stored in pointer j)
    int** k = &j;//(address of pointer j stored in pointer k )

    //prints address of variable i-
   printf("%p\n", &i); //(prints address of variable i)
   printf("%p\n", j);
   printf("\n");

//prints address of pointer j-
   printf("%p\n", &j);
   printf("%p\n", k);
   printf("\n");

//prints addresss of pointer k-
   printf("%p\n", &k);
      printf("\n");
      
//prints value of variable i-
      printf("%d\n", i);
      printf("%d\n", *(&i));
      printf("%d\n",*j );
         printf("\n");

    return 0;
}