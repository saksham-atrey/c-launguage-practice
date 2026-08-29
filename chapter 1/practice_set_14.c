//Write a program to calculate simple interest for a set of values representing principal,number of years, and rate of interest
#include <stdio.h>

int main() {
    float R,T;
    int P;
    printf("Enter principal amount: ");
    scanf("%d", &P);
    printf("Enter rate of interest: ");
    scanf("%f", &R);
    printf("Enter duration of loan: ");
    scanf("%f", &T);

    printf("The simple interest would be %f: ", (P*R*T)/100);

    return 0;
}