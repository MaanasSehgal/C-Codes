// WAP to find the sum of 1st and last of a six-digit number. Number must be a user input.
#include <stdio.h>
#include <math.h>

int main()
{
    int number, numDigits;
    printf("Enter a number: ");
    scanf("%d", &number);

    numDigits = (int)log10(number) + 1;

    int firstDigit = number / pow(10, numDigits - 1);
    int lastDigit = number % 10;

    int sum = firstDigit + lastDigit;
    printf("Sum of the first and last digits: %d\n", sum);

    return 0;
}