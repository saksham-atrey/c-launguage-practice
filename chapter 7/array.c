#include <stdio.h>

int main(){
    int marks[5];
    marks[0]= 5;
    marks[1]= 6;
    marks[2]= 7;
    marks[3]= 8;
    marks[4]= 9; //can go untill marks 4 ie marks[n] can have values from marks[0] to marks[n-1]
printf("%d, %d, %d, %d, %d", marks[0], marks[1], marks[2], marks[3], marks[4]);
    return 0;
}
