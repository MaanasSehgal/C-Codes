// Write a program to replace all the occurrence of a particular character in a string by its previous 3rd character, If any.
// hello,h, lello
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

void replaceChar(char str[], char replace)
{
    int length = findLength(str);
    char thirdLast;
    if (length >= 3)
    {
        thirdLast = str[length - 3];
    }
    else
    {
        printf("%s", str);
        return;
    }

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == replace)
        {
            str[i] = thirdLast;
        }
    }
    printf("%s", str);
    return;
}

int main()
{
    char str[100], replace;
    printf("Enter the string: ");
    fgets(str, 100, stdin);

    printf("Enter the character to replace: ");
    scanf("%c", &replace);

    replaceChar(str, replace);
    return 0;
}