#include <stdio.h>
#include <string.h>

void extractLast(char str[], char newStr[])
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            newStr[count] = str[i - 1];
            count++;
        }
        else if (str[i + 1] == '\0')
        {
            newStr[count] = str[i];
            count++;
        }
    }
    newStr[count] = '\0';
}

int main()
{
    char str[] = "Hello old are you";
    char newStr[strlen(str)];

    extractLast(str, newStr);
    printf("%s", newStr);
    return 0;
}
