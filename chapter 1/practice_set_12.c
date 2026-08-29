/*Calculate the area of a circle and modify the same program to calculate the volume of
a cylinder given its radius and height.*/

#include <stdio.h>

int main()
{
    int radius;
    int height;

    printf("Enter radius of the circle\n");
    scanf("%d", &radius);

    printf("Enter height of cylindar\n");
    scanf("%d", &height);
    float area = 2 * 3.14 * radius * (radius + height);

    printf("area of the cylindar is %f", area);

    return 0;
}