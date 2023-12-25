// Write a C program to check if a given string is a valid email address. Use appropriate validation criteria, such as the presence of '@' and '.' symbols.
#include <stdio.h>

int checkAt(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '@')
        {
            return 1;
        }
    }
    return 0;
}

int checkDot(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '.')
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    char str[100];

    printf("Enter the string: ");
    fgets(str, 100, stdin);

    if (checkAt(str) == 1 && checkDot(str) == 1)
    {
        printf("The email address is valid");
    }
    else
    {
        printf("The email address is invalid");
    }
    return 0;
}