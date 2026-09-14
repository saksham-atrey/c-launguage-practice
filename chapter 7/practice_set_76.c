/*Write a program containing functions which counts the number of positive integers in
an array*/
#include <stdio.h>
void positive_integers(int arr[], int size);
void positive_integers(int arr[], int size){
    int i = 0;
    int n = 0;
    while(i<size)
    {
        if(arr[i]>0){
            n++;
        }
        i++;
    }
    printf("the number of positive integers are %d \n", n);
    
}
int main(){
    int array[] = {-1, 0, 4, 5, -3 , 7};
    positive_integers(array, 6);

}