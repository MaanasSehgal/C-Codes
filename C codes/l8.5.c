// WAP to print GCD and LCM of two numbers.

#include <stdio.h>

int findGCD(int a, int b)
{
    if (b == 0)
        return a;
    return findGCD(b, a % b);
}

int main()
{
    int num1, num2, gcd, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    gcd = findGCD(num1, num2);
    lcm = (num1 * num2) / gcd;

    printf("GCD: %d\n", gcd);
    printf("LCM: %d\n", lcm);

    return 0;
}
