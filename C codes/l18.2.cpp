// WAP to calculate GCD/HCF of two numbers by using a recursive function.
#include <stdio.h>
int findGcd(int smaller, int larger, int gcd, int i)
{
    if (i > smaller)
    {
        return gcd;
    }

    if (smaller % i == 0)
    {
        if (larger % i == 0)
        {
            gcd = i;
        }
    }
    findGcd(smaller, larger, gcd, i + 1);
}

int main()
{
    int num1, num2, gcd;

    printf("Enter two numbers to find HCF: ");
    scanf("%d %d", &num1, &num2);
    if (num1 < num2)
    {
        gcd = findGcd(num1, num2, 1, 2);
    }
    else
    {
        gcd = findGcd(num2, num1, 1, 2);
    }
    printf("The GCD of %d and %d is: %d", num1, num2, gcd, 2);
    return 0;
}