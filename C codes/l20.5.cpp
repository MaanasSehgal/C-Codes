// WAP to count vowels and consonants in a string using pointer.
#include <stdio.h>
#include <string.h>

void count(int size, char *ptr)
{
    int vowels = 0, consonants = 0;
    for (int i = 0; i < size; i++)
    {
        if (*(ptr + i) == 'a' || *(ptr + i) == 'e' || *(ptr + i) == 'i' || *(ptr + i) == 'o' || *(ptr + i) == 'u')
        {
            vowels++;
        }
        else if ((int)(*(ptr + i)) <= 65 || (int)(*(ptr + i)) >= 90 || (int)(*(ptr + i)) <= 97 || (int)(*(ptr + i)) <= 122)
        {
            consonants++;
        }
    }
    consonants--;
    printf("Vowels: %d\nConsonants: %d", vowels, consonants);
    return;
}

int main()
{
    char str[100];

    printf("Enter the string: ");
    fgets(str, 100, stdin);

    int size = strlen(str);
    char *ptr = str;

    count(size, ptr);
    return 0;
}