// Write a C program to remove all vowels from a given string. Consider both uppercase and lowercase vowels.

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

void removeVowels(char str[])
{
    int length = findLength(str);

    for (int i = 0; i < length; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            for (int j = i; str[j + 1] != '\0'; j++)
            {
                str[j] = str[j + 1];
            }
            // length--;
        }
    }

    for (int i = 0; str[i] != '\0'; i++)
    {
        printf("%c", str[i]);
    }
    return;
}

int main()
{
    char str[100];

    printf("Enter the string: ");
    fgets(str, 100, stdin);

    removeVowels(str);
    return 0;
}