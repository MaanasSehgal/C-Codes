// Write a C program to determine whether a number is prime or not using a function named as “PRIME”.
#include <stdio.h>
#include <math.h>

bool checkPrime(int num, int i);

int main()
{
    int num, i = 2;

    printf("Enter the number: ");
    scanf("%d", &num);

    if (checkPrime(num, i) == true)
    {
        printf("The number is prime");
    }
    else
    {
        printf("The number is composite");
    }
    return 0;
}

bool checkPrime(int num, int i)
{
    if (num <= 2 && num > 0)
    {
        return true;
    }
    if (num % i == 0)
    {
        return false;
    }
    if (i > sqrt(num))
    {
        return true;
    }
    checkPrime(num, i + 1);
}