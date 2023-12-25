// WAP to find the factorial of a number n by using a suitable user defined function.

#include <stdio.h>

int findFact(int num, int fact);

int main()
{
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    printf("The factorial of %d is: %d", num, findFact(num, 1));
    return 0;
}

int findFact(int num, int fact)
{
    if (num == 0)
    {
        return fact;
    }
    fact *= num;
    findFact(num - 1, fact);
}