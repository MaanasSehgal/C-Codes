// WAP to print a string in reverse using a pointer.
#include <stdio.h>
#include <string.h>

void reverseString(int size, char *ptr)
{
    for (int i = size - 1; i >= 0; i--)
    {
        printf("%c", *(ptr + i));
    }
    return;
}

int main()
{
    char str[100];

    printf("Enter the string: ");
    fgets(str, 100, stdin);

    int size = strlen(str);
    char *ptr = str;

    reverseString(size, ptr);
    return 0;
}