// Write a C program to check if two strings are anagrams.
//  (An anagram is a word or phrase formed by rearranging the letters of another word or phrase.)
#include <stdio.h>

int checkAnagram(char str1[], char str2[])
{
    int count1[256] = {0};
    int count2[256] = {0};

    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0')
    {
        count1[str1[i]]++;
        count2[str2[i]]++;
        i++;
    }

    if (str1[i] != '\0' || str2[i] != '\0')
        return 0;

    for (i = 0; i < 256; i++)
    {
        if (count1[i] != count2[i])
            return 0;
    }

    return 1;
}

int main()
{
    char str1[100];
    char str2[100];

    printf("Enter the first string: ");
    int c, i = 0;
    while ((c = getchar()) != '\n' && c != EOF && i < 99)
    {
        str1[i++] = c;
    }
    str1[i] = '\0'; 

    printf("Enter the second string: ");
    i = 0;
    while ((c = getchar()) != '\n' && c != EOF && i < 99)
    {
        str2[i++] = c;
    }
    str2[i] = '\0';

    if (checkAnagram(str1, str2))
        printf("The two strings are anagrams");
    else
        printf("The two strings are not anagrams");

    return 0;
}
