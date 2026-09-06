/*Write a program to create an array of 10 integers and store multiplication table of n in
it*/
#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    ;
    
    int table_of_n[10];
   for (int i = 0; i < 10; i++)
   {
     table_of_n[i] = (i + 1)*n;

   }
   for ( int j = 0; j < 10; j++)
    {
       printf("times %d is %d\n", j+1, table_of_n[j]);
    }
   
      
    return 0;
}