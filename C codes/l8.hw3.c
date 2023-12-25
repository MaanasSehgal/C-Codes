// WAP to find out xn/n!

#include <stdio.h>
#include <math.h>

int main()
{
    float n, x, ans = 0, nFact = 1;
    printf("Enter the value of x: ");
    scanf("%f", &x);

    printf("Enter the value of n: ");
    scanf("%f", &n);

    for (int i = 1; i <= n; i++)
    {
        nFact *= i;
    }
    ans = pow(x, n) / (nFact);
    printf("The value of 1 / n! is %f", ans);
    return 0;
}