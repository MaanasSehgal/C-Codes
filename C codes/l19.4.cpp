// Write a program to check whether an entered string is palindrome or not.
#include <stdio.h>
#include <stdbool.h>

int findLength(char str[])
{
    int length = 0;
    for (int i = 0; str[i] != '\0'; i++, length++)
    {
    }
    return length;
}

bool checkPalindrome(char str[])
{
    int i = 0, length = findLength(str);
    int j = length - 1;
    while (i < j)
    {
        if (str[i] != str[j])
        {
            return false;
        }
        i++, j--;
    }
    return true;
}

int main()
{
    char str[] = "heleeh";

    if (checkPalindrome(str))
    {
        printf("The string is palindrome");
    }
    else
    {
        printf("The string is not palindrome");
    }
    return 0;
}