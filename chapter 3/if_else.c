#include <stdio.h>

int main()
{
    int age;
    printf("Please enter your age ");
    scanf("%d", &age);

    if (age > 15)
    {
        printf("Your age is greater than 15");
    }
    else
    {
        printf("Your age is less than 15");
    };
    return 0;
}