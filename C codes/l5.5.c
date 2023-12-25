// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     double a, b, c, d, x1, x2;

//     printf("Enter the 3 variables, a b c: ");
//     scanf("%lf %lf %lf", &a, &b, &c);

//     d = (b * b) - (4 * a * c);
//     x1 = (-b + sqrt(d)) / (2.0 * a);
//     x2 = (-b - sqrt(d)) / (2.0 * a);

//     if (d > 0)
//     {
//         printf("Distinct roots are %lf and %lf", x1, x2);
//     }
//     else if (d == 0)
//     {
//         printf("Equal roots are %lf and %lf", x1, x2);
//     }
//     else if (d < 0)
//     {
//         printf("Imaginary roots");
//     }
//     return 0;
// }

#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, d, x1, x2;
    printf("Enter 3 numbers a b c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = (b * b) - (4 * a * c);

    x1 = (-b + sqrt(d)) / (2 * a);
    x2 = (-b - sqrt(d)) / (2 * a);

    if (d > 0)
    {
        printf("Distinct roots are: %f and %f", x1, x2);
    }
    else if (d == 0)
    {
        printf("Equal roots are: %f and %f", x1, x2);
    }
    else if (d < 0)
    {
        printf("Imaginary roots exist");
    }

    return 0;
}