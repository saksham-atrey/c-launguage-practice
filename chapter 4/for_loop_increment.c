//for (initialize; test; increment or decrement)
#include <stdio.h>

int main() {
    int i;
    int n;
    printf("number ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        printf("%d\n", i);
    }
    return 0;
}