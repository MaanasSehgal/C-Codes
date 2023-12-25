// write a c program to perform swapping of two integers without using a third variable
#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter num1 and num2: ");
    scanf("%d %d", &num1, &num2);

    num2 = num1 + num2;
    num1 = num2 - num1;
    num2 = num2 - num1;

    printf("After swap, number one is %d and number two is %d", num1, num2);
    return 0;
}
