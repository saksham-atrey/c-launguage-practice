/*Write a function to calculate force of attraction on a body of
 mass 'm' exerted by earth. Consider g = 9.8m/s²*/
#include <stdio.h>
float force(float a);
float force(float a){
    return a*9.8;
}

int main() {
    float m = 76;
  float F = force(m);
  printf("force due to gravity for mass %.2f is %.2f ", m, force(m));

    
    return 0;
}