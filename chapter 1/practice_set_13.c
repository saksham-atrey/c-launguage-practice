// Write a program to convert Celsius (Centigrade) temperature to Fahrenheit.
#include <stdio.h>

int main()
{
    float C;
    printf("Enter temperature in celcius\n");
    scanf("%f", &C);

    printf("The temperature in fahrenheit is %f", (9.0 / 5.0) * C + 32);

    return 0;
}