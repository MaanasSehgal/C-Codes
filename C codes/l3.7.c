// Write a program to perform swapping of two integers using a third variable
#include <stdio.h>

int main()
{
    int num1, num2, num3;
    printf("Enter number 1, then number 2: ");
    scanf("%d %d", &num1, &num2);
    num3 = num1;
    num1 = num2;
    num2 = num3;
    printf("After swap, number one: %d and number two: %d", num1, num2);
    return 0;
}