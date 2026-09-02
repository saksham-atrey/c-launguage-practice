// Write a program to find greatest of four numbers entered by the user.
#include <stdio.h>

int main()
{
    int a, b, c, d, value;
    printf("Please enter 1st number ");
    scanf("%d", &a);
    printf("Please enter 2nd number ");
    scanf("%d", &b);
    printf("Please enter 3rd number ");
    scanf("%d", &c);
    printf("Please enter 4th number ");
    scanf("%d", &d);
    if(a>b&&a>c&&a>d){
        printf("%d is the greatest number", a);
    }

    else if(b>a&&b>c&&b>d){
        printf("%d is the greatest number", b);
    }
    else if(c>a&&c>b&&c>d){
        printf("%d is the greatest number", c);
    }
    else if(d>a&&d>b&&d>c){
        printf("%d is the greatest number", d);
    }
    return 0;
}