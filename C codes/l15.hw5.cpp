// WAP to test whether a number n is palindrome number or not.

#include <stdio.h>

bool checkPalindrome(int num);

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (checkPalindrome(num))
    {
        printf("The number is a palindrome number");
    }
    else
    {
        printf("The number is not a palindrome number");
    }
    return 0;
}

bool checkPalindrome(int num)
{
    int temp = num, lastDigit = 0, newNum;
    while (temp != 0)
    {
        lastDigit = temp % 10;
        newNum = newNum * 10 + lastDigit;
        temp /= 10;
    }

    if (newNum == num)
    {
        return true;
    }
    else
    {
        return false;
    }
}