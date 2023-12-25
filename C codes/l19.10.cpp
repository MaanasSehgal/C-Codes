// Write a C program to remove all leading and trailing spaces from a given string, if any.
#include <stdio.h>

int findLength(char str[])
{
    int length = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    return length;
}

void removeSpaces(char str[])
{
    int length = findLength(str);

    for (int i = 0; i < length; i++)
    {
        if (str[i] == ' ')
        {
            for (int j = i; j < length; j++)
            {
                str[j] = str[j] + str[j + 1] - (str[j + 1] = str[j]);
            }
            i--;
            length--;
        }
    }

    printf("%s", str);
    return;
}

int main()
{
    char str[100];

    printf("Enter the string: ");
    fgets(str, 100, stdin);

    removeSpaces(str);
    return 0;
}