// WAP to test whether an inputted number is a strong number or not.
//  (A number is said to be Strong if sum of factorial of digits is equal to the original number)

#include <stdio.h>

int main()
{
    int num, numCopy, numDigits = 0, factorialSum = 0, fact = 1;
    printf("Enter the number: ");
    scanf("%d", &num);

    numCopy = num;

    while (numCopy > 0)
    {
        int lastDigit = numCopy % 10;
        if (lastDigit == 0)
        {
            factorialSum += 1;
            numCopy /= 10;
            fact = 1;
        }
        else
        {
            for (int i = 1; i <= lastDigit; i++)
            {
                fact *= i;
            }
            factorialSum += fact;
            numCopy /= 10;
            fact = 1;
        }
    }

    if (factorialSum == num)
    {
        printf("The number is a strong number");
    }
    else
    {
        printf("The number is not a strong number");
    }
    return 0;
}