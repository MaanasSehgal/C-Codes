// WAP to find the roots of a quadratic equation ax2+bx+c=0 using switch-case statement.
#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, d, x1, x2;
    char state;

    printf("Enter the coefficients a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = (b * b) - (4 * a * c);

    if (d > 0)
    {
        state = 'd';
    }
    else if (d == 0)
    {
        state = 'e';
    }
    else if (d < 0)
    {
        state = 'i';
    }
    x1 = (-b + sqrt(d)) / (2 * a);
    x2 = (-b - sqrt(d)) / (2 * a);
    switch (state)
    {
    case 'd':
        printf("Distinct roots are %f and %f", x1, x2);
        break;

    case 'e':
        printf("Equal roots are %f and %f", x1, x1);
        break;

    case 'i':
        printf("Imaginary roots");
        break;

    default:
        printf("Invalid");
    }

    return 0;
}

// %.2f means we will consider till 2 decimals only