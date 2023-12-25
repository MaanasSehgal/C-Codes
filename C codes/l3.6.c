// Write a program to calculate area of a triangle who's base and height are user input
#include <stdio.h>

int main()
{
    float area, base, height;
    printf("Enter the base and height of a triangle: ");
    scanf("%f %f", &base, &height);

    area = (base * height) / 2;
    printf("The area of the triangle is %f sq units", area);
    return 0;
}