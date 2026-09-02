// short method to use if else
// codition ? expression-if-true:expression-if-false

#include <stdio.h>

int main(){

    int a = 345;
    int b= 345452;
    a>b?printf("a is greater"):printf("b is greater");
}

//similarly-

#include <stdio.h>

int main() {
    int a= 0;
    int b= 45;
    a&&b?printf("a is greater than b"):printf("b is greater than a");
    return 0;
}
