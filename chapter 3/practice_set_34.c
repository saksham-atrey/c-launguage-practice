/*Write a program to find whether a year entered by the user is a leap year or not. Take
year as an input from the user.*/
#include <stdio.h>

int main()
{
    int year;
    printf("please enter year ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("%d is a leap year", year);
    }
    else
    {
        printf("%d is not a leap year", year);
    }
    return 0;

    // OR(SHORTER BUT LESS REDABLE)
}
#include <stdio.h>

int main()
{
    int year;
    printf("please enter year ");
    scanf("%d", &year);
    (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) ? printf("%d is a leap year", year) : printf("%d is not a leap year", year);
    return 0;
}