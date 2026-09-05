#include <stdio.h>


int sum1(int, int);


int sum1(int a, int b){
    a = 6; //(changes value of copy of variable)
    return a + b;
}
int sum2(int *, int *); //(int pointer )
int sum2(int* a, int* b){
    *a = 6; //(changes value of actual variable)
    return (*a + *b);
}

int main(){
    int x = 1, y=6;
    printf("The sum of 1 and 6 is %d\n", sum1(x, y));
    printf("The value of x is %d\n", x); //(sum can't change value of x since it gets a copy of x)

    printf("The sum of 1 and 6 is %d\n", sum2(&x, &y));
    printf("The value of x is %d", x); //(sum can change the value of x since it gets address of x)
    return 0;
}