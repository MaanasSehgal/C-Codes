// Write a C program to capitalize the first letter of each word in a given sentence. Assume that words are separated by spaces.
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

char capitalize(char first)
{
    int temp = (int)first;
    printf("Capitalized %c \n", first);
    return (char)(temp - 32);
}

void capitalizeLetters(char str[])
{
    int length = findLength(str);
    str[0] = capitalize(str[0]);

    for (int i = 1; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            if ((char)(str[i + 1]) >= 97 && (char)(str[i + 1]) <= 122)
            {
                str[i + 1] = capitalize(str[i + 1]);
            }
        }
    }
    printf("%s", str);
}

int main()
{
    char str[100];

    printf("Enter the string: ");
    fgets(str, 100, stdin);

    capitalizeLetters(str);
    return 0;
}