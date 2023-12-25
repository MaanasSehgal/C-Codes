// Use structures to perform addition, subtraction, multiplication, and division operations on two complex numbers.
#include <stdio.h>

struct calculator
{
    int r1;
    int i1;
    int r2;
    int i2;
    char operation;
};

int main()
{
    struct calculator c;

    printf("Enter the real and imaginary units of the first complex number: \n");
    printf("First real: ");
    scanf("%d", &c.r1);
    printf("First imaginary: ");
    scanf("%d", &c.i1);

    printf("\nEnter the real and imaginary units of the second complex number: \n");
    printf("Second real: ");
    scanf("%d", &c.r2);
    printf("Second imaginary: ");
    scanf("%d", &c.i2);

    printf("\nYou have entered the first number as %d.0 + %d.0i\n", c.r1, c.i1);
    printf("You have entered the second number as %d.0 + %d.0i\n", c.r2, c.i2);

    printf("\nWhat do you want to do?\n");
    printf("Press 'e' for exit\n");
    printf("Press 'a' for addition\n");
    printf("Press 's' for subtraction\n");
    printf("Press 'm' for multiplication\n");
    printf("Press 'd' for division\n");

    printf("Your answer: ");
    scanf(" %c", &c.operation);

    switch (c.operation)
    {
    case 'e':
        return 0;
        break;
    case 'a':
        printf("Result of Addition: %d.0 + %d.0i\n", (c.r1 + c.r2), (c.i1 + c.i2));
        break;
    case 's':
        printf("Result of Subtraction: %d.0 + %d.0i\n", (c.r1 - c.r2), (c.i1 - c.i2));
        break;
    case 'm':
        printf("Result of Multiplication: %d.0 + %d.0i\n", (c.r1 * c.r2 - c.i1 * c.i2), (c.r1 * c.i2 + c.i1 * c.r2));
        break;
    case 'd':
        if (c.r2 == 0 || c.i2 == 0)
        {
            printf("Division by zero is undefined.\n");
        }
        else
        {
            printf("Result of Division: %.2f + %.2fi\n", (float)((c.r1 * c.r2 + c.i1 * c.i2) / (c.r2 * c.r2 + c.i2 * c.i2)), (float)((c.i1 * c.r2 - c.r1 * c.i2) / (c.r2 * c.r2 + c.i2 * c.i2)));
        }
        break;
    default:
        printf("Invalid operation: Code exited\n");
        return 0;
    }
}
