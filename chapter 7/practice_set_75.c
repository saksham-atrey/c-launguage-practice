//Write a program containing a function which reverses the array passed to it
#include <stdio.h>
void printarray(int arr[], int size);
void printarray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
        
    }
}
    void reverse(int arr[], int n){
   /* for  i from 0 to n/2
    arr[i] arr[n-i-1]  */
   int temp;
   for (int i = 0; i < n/2; i++)
   {
    temp = arr[i];
    arr[i] = arr[n-i-1];
    arr[n-i-1] = temp;
   }
   
}
int main(){
   int array[] = {1,2,3,4,5,6};
   printarray(array,6);
   printf("\n");
   reverse(array, 6);
   printarray(array, 6);

    return 0;
}