// Write a C program to extract a substring from a given string. Prompt the user to enter the starting position and length of the substring.
#include <stdio.h>

int findLength(char str[])
{
    int length = 0;
    for (int i = 0; str[i] != '\0'; i++, length++)
    {
    }
    return length;
}

void findSubstring(char str[], int m, int n)
{
    char subString[findLength(str)];
    int count = 0;

    for (int i = m; i <= n; i++)
    {
        subString[count] = str[i];
        count++;
    }

    printf("The substring is: ");
    puts(subString);
}

int main()
{
    int m, n;
    char str[100];
    printf("Enter the string: ");
    fgets(str, 100, stdin);

    printf("Enter the 2 indices for substring: ");
    scanf("%d %d", &m, &n);

    findSubstring(str, m, n);
    return 0;
}