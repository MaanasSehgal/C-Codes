// WAP to check whether a number n is prime number or not.

#include <stdio.h>
#include <math.h>

int main()
{
    int num, factorSum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            factorSum += i;
        }
    }

    if (factorSum == 0)
    {
        printf("The number is prime");
    }
    else
    {
        printf("The number is not prime");
    }
    return 0;
}
