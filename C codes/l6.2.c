// WAP to input any two integers, and provide a menu to the user to select any of the options as add, subtract, multiply, divide and display the result accordingly

#include <stdio.h>

int main()
{
    float num1, num2, ans;
    char action;

    printf("Enter the operation: ");
    scanf(" %c", &action);

    printf("Enter two integers: ");
    scanf("%f %f", &num1, &num2);

    switch (action)
    {
    case 'a':
        ans = num1 + num2;
        break;

    case 's':
        ans = num1 - num2;
        break;

    case 'm':
        ans = num1 * num2;
        break;

    case 'd':
        ans = num1 / num2;
        break;

    default:
        printf("NOT VALID");
    }
    printf("Answer is %.2f", ans);
    return 0;
}