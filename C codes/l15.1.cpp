// WAP to add two numbers entered through the keyboard by using a suitable user defined function.

#include <stdio.h>

int findSum(int num1, int num2);

int main()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("The sum of numbers is: %d", findSum(num1, num2));
    return 0;
}

int findSum(int num1, int num2)
{
    return num1 + num2;
}
