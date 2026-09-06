/*Create an array of size 3 × 10 containing multiplication tables of the numbers
entered by user*/
 #include <stdio.h>
 
 int main(){
    int l,m,n;
printf("please enter 3 numbers ");
scanf("%d", &l);
scanf("%d", &m);
scanf("%d", &n);

int table_of_2_7_9[3][10];
   for (int i = 0; i < 10; i++)
   {
     table_of_2_7_9[0][i] = (i + 1)*l;

   };
    for (int j = 0; j < 10; j++)
   {
     table_of_2_7_9[1][j] = (j + 1)*m;

   };
 for (int k = 0; k < 10; k++)
   {
     table_of_2_7_9[2][k] = (k + 1)*n;

   };
   for (int a = 0; a < 3; a++)
   {
     for ( int b = 0; b < 10; b++)
     {
        printf("%d ", table_of_2_7_9[a][b]);
     }
     printf("\n");
   }
   

    return 0;
 }