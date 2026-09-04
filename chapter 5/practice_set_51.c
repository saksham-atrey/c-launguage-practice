//Write a program using function to find average of three numbers
#include <stdio.h>
float average(int a, int b, int c);
float average(int a, int b, int c)
{
    printf("average of the values is %f ", (a + b + c) / 3.0);
}
int main()
{
    int i = 4;
    int j = 7;
    int k = 9;
    average(i, j, k);
    return 0;
}