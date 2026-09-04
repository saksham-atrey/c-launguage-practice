#include <stdio.h>

int main() {
  int a = 4;
printf("%d %d %d \n", a, ++a, a++);
// 6 6 4 (evaluation order righ to left(most compilers))
// 4 5 5 (evaluation order left to right)

    return 0;
}