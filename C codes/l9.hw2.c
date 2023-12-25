#include <stdio.h>

int main()
{
    int num, count = 65, alphabet;

    num = 5;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            alphabet = (char)count;
            printf("%c ", alphabet);
            count--;
        }
        count = 65 + i;
        printf("\n");
    }
}