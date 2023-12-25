// WAP to find the length of a string with/without using library function for getting length of the string
#include <stdio.h>

int findLength(char str[])
{
    int length = 0;
    for (int i = 0; str[i] != '\0'; i++, length++)
    {
    }
    return length;
}

int main()
{
    char str[] = "Maanas Sehgal";

    int length = findLength(str);
    printf("The length of the string is: %d", length);
    return 0;
}