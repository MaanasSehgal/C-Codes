// WAP to read a character from the user and test whether it is a vowel or consonant or not an alphabet.
#include <stdio.h>
int main()
{
    int ascii;
    char enteredChar;
    printf("Enter an alphabet: ");
    scanf("%c", &enteredChar);

    ascii = (int)enteredChar;
    if (ascii == 65 || ascii == 69 || ascii == 73 || ascii == 79 || ascii == 85 || ascii == 97 || ascii == 101 || ascii == 105 || ascii == 111 || ascii == 117)
    {
        printf("The character is a vowel");
    }
    else if ((ascii >= 97 && ascii <= 122) || (ascii >= 65 && ascii <= 97))
    {
        printf("The character is a consonant");
    }
    else
    {
        printf("The character is not valid");
    }

    return 0;
}