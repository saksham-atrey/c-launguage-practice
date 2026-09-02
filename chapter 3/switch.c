#include <stdio.h>

int main() {
    int a;
    printf("Enter a: ");
    scanf("%d", &a);
    switch(a){
        case 50:
        printf("you have entered one\n");
        break;
        case 25:
        printf("you have entered two\n");
        break;
        case 7:
        printf("you have entered three\n");
        break;
    default:
    printf("nothing matched");
    }

    return 0;
    }