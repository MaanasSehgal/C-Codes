// Print weekday name program according to given weekday number using switch-case
// weekday number (0-6) and print weekday name (Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, and Saturday)
#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number(0-6): ");
    scanf("%d", &num);

    switch (num)
    {
    case 0:
        printf("Sunday");
        break;

    case 1:
        printf("Monday");
        break;

    case 2:
        printf("Tuesday");
        break;

    case 3:
        printf("Wednesday");
        break;

    case 4:
        printf("Thursday");
        break;

    case 5:
        printf("Friday");
        break;

    case 6:
        printf("Saturday");
        break;
    default:
        printf("Enter a valid number");
    }
    return 0;
}