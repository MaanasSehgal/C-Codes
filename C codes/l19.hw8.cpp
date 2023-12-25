// Write a C program to compare two strings without using the built-in strcmp() function.
#include <stdio.h>

int findAsciiSum(char str[])
{
    int sum = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        sum += (int)(str[i]);
    }
    return sum;
}

int compareStrings(char str1[], char str2[])
{
    int a = findAsciiSum(str1), b = findAsciiSum(str2);
    if (a >= b)
    {
        return a - b;
    }
    else
    {
        return b - a;
    }
}

int main()
{
    char str1[100];
    char str2[100];

    printf("Enter string 1: ");
    fgets(str1, 100, stdin);

    printf("Enter string 2: ");
    fgets(str2, 100, stdin);

    int ans = compareStrings(str1, str2);
    printf("Answer is %d", ans);

    return 0;
}