// WAP to test whether a number entered through keyboard is ODD or EVEN.
#include <stdio.h>

int main()
{
    int num;
    printf("Enter an integer number: ");
    scanf("%d", &num);

    if (num % 2 != 0)
    {
        printf("The number is odd");
    }
    else
    {
        printf("The number is even");
    }
    return 0;
}