// WAP to swap the contents of two variables by using a single statement for swap.
#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter the first variable: \n");
    scanf("%d", &num1);

    printf("Enter the second variable: \n");
    scanf("%d", &num2);

    num1 = num1 + num2 - (num2 = num1);
    printf("num1 is %d and num2 is %d", num1, num2);
    return 0;
}