#include <stdio.h>

int main(){
    int marks[] = {12, 34, 53, 66};

    int* ptr = marks; //same as writing int* ptr = &marks[0]
    

    for (int i = 0; i < 4; i++)
    {
       
        printf("The marks at index %d is %d\n", i, *ptr);
        ptr++;
    }
 //IMPORTANT-
//Giving the name of the array to a function also gives the address of an array to the function
    return 0;
}