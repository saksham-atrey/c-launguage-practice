/*Write a recursive function to calculate the sum of first
 'n' natural numbers*/
 #include <stdio.h>
 int sum(int a);
 int sum(int a){
    if(a == 1){
    return 1;
}else{
    return a + sum(a-1);
 }
}
 int main() {
    int n = 10;
    printf("the sum of %d natural numbers is %d", n , sum(n));
    return 0;
 }