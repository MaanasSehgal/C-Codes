// WAP to read an alphabet from the user and convert it into uppercase if the entered alphabet is in lowercase, otherwise display an appropriate message.

#include <stdio.h>
int main()
{
    int ascii, up;
    char enteredChar;
    printf("Enter any alphabet a-z or A-Z: ");
    scanf("%c", &enteredChar);

    ascii = (int)enteredChar;
    if (ascii >= 97 && ascii <= 122)
    {
        up = ascii - 32;
        printf("%c is the uppercase", (char)up);
    }
    else if (ascii >= 65 && ascii <= 90)
    {
        printf("%c is already in uppercase", enteredChar);
    }
    else
    {
        printf("The value was not valid");
    }

    return 0;
}