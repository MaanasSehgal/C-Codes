// Write a C program to perform swapping of two integers using a function SWAP.

#include <stdio.h>

void swapNums(int num1, int num2);

int main()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    swapNums(num1, num2);
    return 0;
}

void swapNums(int num1, int num2)
{
    num1 = num1 + num2 - (num2 = num1);
    printf("After swap\nNum1 is: %d\nNum2 is: %d\n", num1, num2);
}