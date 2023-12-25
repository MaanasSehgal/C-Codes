// WAP to test whether a number is Palindrome Number or not.
//  (A number is said to be Palindrome when its reverse is equal with the original number.
//  Ex-121)
#include <stdio.h>

int main()
{
    int num, originalNum, reversedNum = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num; 

    while (num != 0)
    {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    if (reversedNum == originalNum)
    {
        printf("%d is a Palindrome number.\n", originalNum);
    }
    else
    {
        printf("%d is not a Palindrome number.\n", originalNum);
    }

    return 0;
}
