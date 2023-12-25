// Write a program to count the number of vowels, consonants, new lines and the total number of characters and words present in a string.
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

int vowelsCount(char str[], int length)
{
    int vowels = 0;
    for (int i = 0; i < length; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            vowels++;
        }
    }
    return vowels;
}
int consonantCount(char str[], int length)
{
    int consonants = 0;
    for (int i = 0; i < length; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == '@')
        {
        }
        else
        {
            consonants++;
        }
    }
    return consonants;
}
int linesCount(char str[], int length)
{
    int lines = 0;
    for (int i = 0; i < length; i++)
    {
        if (str[i] == '\n')
        {
            lines++;
        }
    }
    return lines;
}

int charCount(char str[], int length)
{
    int characters = 0;
    for (int i = 0; i < length; i++)
    {
        if (str[i] == ' ' || str[i] == '\n')
        {
        }
        else
        {
            characters++;
        }
    }
    return characters;
}

int main()
{
    char str[100];

    printf("Enter the string: ");
    scanf("%[^@]s", str);

    int length = findLength(str);

    int vowels = vowelsCount(str, length);
    int consonant = consonantCount(str, length);
    int lines = linesCount(str, length);
    int characters = charCount(str, length);

    printf("Length of string: %d\nNumber of characters: %d\nNumber of Vowels: %d\nNumber of consonants: %d\nNumber of new lines: %d\n", length, characters, vowels, consonant, lines);
    return 0;
}
