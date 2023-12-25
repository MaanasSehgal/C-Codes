// WAP to check whether the triangle is equilateral, isosceles or scalene (Triangle consists of three sides of provided lengths n1, n2 and n3 units).
#include <stdio.h>

int main()
{
    int side1, side2, side3;

    printf("Enter the three sides of a triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);
    // 1 2 3
    if (side1 == side2 || side2 == side3 || side3 == side1)
    {
        if (side1 == side2 && side2 == side3)
        {
            printf("The triangle is an equilateral triangle");
        }
        else
        {
            printf("The triangle is an isoscles triangle");
        }
    }
    else
    {
        printf("The triangle is a scalene triangle");
    }
    return 0;
}