// Write a program to count the frequency of each character present in a string.
#include <stdio.h>

void findFreq(char str[])
{
    int count, length = 0;
    while (str[length] != '\0')
    {
        length++;
    }

    for (int i = 0; i < length; i++)
    {
         // Marking visited characters by '0'
        count = 1;
        if (str[i] != '0')
        {
            for (int j = i + 1; j < length; j++)
            {
                if (str[i] == str[j])
                {
                    count++;
                    str[j] = '0';
                }
            }
            if (str[i] == '\n')
            {
                printf("Count of Enter: %d\n", count);
            }
            else if (str[i] == ' ')
            {
                printf("Count of spaces: %d\n", count);
            }
            else
            {
                printf("Count of %c: %d\n", str[i], count);
            }
        }
    }
}

int main()
{
    char str[100];

    printf("Enter the string: ");
    fgets(str, 100, stdin);

    findFreq(str);
    return 0;
}
