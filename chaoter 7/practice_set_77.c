/*Create an array of size 3 × 10 containing multiplication tables of the numbers 2, 7 and
9 respectively*/
 #include <stdio.h>
 
 int main(){

int table_of_2_7_9[3][10];
int numbers[3] = {2, 7, 9};
   for (int i = 0; i < 10; i++)
   {
     table_of_2_7_9[0][i] = (i + 1)*2;

   };
    for (int j = 0; j < 10; j++)
   {
     table_of_2_7_9[1][j] = (j + 1)*7;

   };
 for (int k = 0; k < 10; k++)
   {
     table_of_2_7_9[2][k] = (k + 1)*9;

   };
   for (int a = 0; a < 3; a++)
   {
    printf("The table of %d is:\n", numbers[a]);
     for ( int b = 0; b < 10; b++)
     {
        printf("%d ", table_of_2_7_9[a][b]);
     }
     printf("\n");
   }
   

    return 0;
 }