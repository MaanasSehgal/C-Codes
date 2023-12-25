// WAP to test whether a number is Armstrong Number or not.
// (A number is said to be Armstrong when the sum of cubes of its digit is equal with the original number.
// Ex-153)

#include <stdio.h>

int main()
{
    int num, numCopy, sum = 0, numDigits = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    numCopy = num;

    while (numCopy != 0)
    {
        numCopy /= 10;
        numDigits++;
    }

    numCopy = num;

    while (numCopy > 0)
    {
        int lastDigit = numCopy % 10;
        numCopy /= 10;
        int digitCubed = 1;
        for (int i = 0; i < numDigits; i++)
        {
            digitCubed *= lastDigit;
        }
        sum += digitCubed;
    }

    if (sum == num)
    {
        printf("The number is an Armstrong number.\n");
    }
    else
    {
        printf("The number is not an Armstrong number.\n");
    }

    return 0;
}
