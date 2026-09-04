//Write a function to convert Celsius temperature into Fahrenheit
#include <stdio.h>
float fahrenheit(float a);
float fahrenheit(float a ){
  printf("the temperature in F is %.2f", (a * 9.0 / 5.0) + 32);
}
int main() {
    float C = 0;
    fahrenheit(C);
    return 0;
}