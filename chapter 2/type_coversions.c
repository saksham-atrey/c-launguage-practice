/* int/int = int
float/int = float
float/float = float
a float value written in int follows greatest integer function*/

#include <stdio.h>

int main() {
    float j = 5/2;
    float t = 5.0/2;
    printf("%f, %f", j, t);
    return 0;
}
