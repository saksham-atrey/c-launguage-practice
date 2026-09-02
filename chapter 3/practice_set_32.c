/*Write a program to determine whether a student has passed or failed. To pass, a
student requires a total of 40% and at least 33% in each subject. Assume there are
three subjects and take the marks as input from the user*/
#include <stdio.h>

int main()
{
    float physics, chemistry, maths;
    printf("please enter physics marks: ");
    scanf("%f", &physics);
    if (physics < 33)
    {
        printf("You have failed");
        return 0;
    }
    printf("please enter chemistry marks: ");
    scanf("%f", &chemistry);
    if (chemistry < 33)
    {
        printf("you have failed");
        return 0;
    }
    printf("please enter mathematics marks: ");
    scanf("%f", &maths);
    if (maths < 33)
    {
        printf("you have failed");
        return 0;
    }
    if ((physics + chemistry + maths) / 3 >= 40)
    {
        printf("you have passed!");
    }
    else
    {
        printf("you have failed");
    }
    return 0;
}

//OR
//simpler method-

#include <stdio.h>

int main()
{
    int physics, chemistry, maths;

    printf("Enter marks of physics: ");
    scanf("%d", &physics);

    printf("Enter marks of mathematics: ");
    scanf("%d", &maths);

    printf("Enter marks of chemistry: ");
    scanf("%d", &chemistry);

    if (physics >= 33 &&
        maths >= 33 &&
        chemistry >= 33 &&
        (physics + maths + chemistry) / 3.0 >= 40)
    {
        printf("You have passed!");
    }
    else
    {
        printf("You have failed!");
    }

    return 0;
}