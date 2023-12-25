// WAP to find the factorial of a number n by writing a recursive function for it.

#include <stdio.h>

int findFact(int num, int fact)
{
    if (num <= 1)
    {
        return fact;
    }
    findFact(num - 1, fact * num);
}

int main()
{
    int num;

    printf("Enter the number to find factorial: ");
    scanf("%d", &num);

    printf("The factorial is: %d", findFact(num, 1));
    return 0;
}