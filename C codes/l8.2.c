// WAP to test whether a number is Perfect Number or not.
//  (A number is said to be Perfect when the sum of factors excluding the number itself is equal to the original number.
//  Ex-6)

#include <stdio.h>
#include <math.h>

int main()
{
    int num, factorSum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            factorSum += i;
            if (i != num / i && num / i != num)
            {
                factorSum += num / i;
            }
        }
    }
    if (factorSum == num)
    {
        printf("The number is Perfect");
    }
    else
    {
        printf("The number is not Perfect");
    }
    return 0;
}