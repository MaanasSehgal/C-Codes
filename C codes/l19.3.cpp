// Write a program to concatenate two strings without using any library function.
#include <stdio.h>

int findLength(char str[])
{
    int length = 0;
    for (int i = 0; str[i] != '\0'; i++, length++)
    {
    }
    return length;
}

void concatStrings(char str1[], char str2[])
{
    int count = 0;
    int newStrLength = findLength(str1) + findLength(str2);
    char newStr[newStrLength];

    for (int i = 0; str1[i] != '\0'; i++)
    {
        newStr[count] = str1[i];
        count++;
    }
    for (int i = 0; str2[i] != '\0'; i++)
    {
        newStr[count] = str2[i];
        count++;
    }

    puts(newStr);
}

int main()
{
    char str1[] = "Meo";
    char str2[] = "ooooooow";

    concatStrings(str1, str2);
    return 0;
}