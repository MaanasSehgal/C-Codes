// WAP to print the natural numbers from n to 1(value of n is user input).

#include <stdio.h>

int main()
{
    int num, count;

    printf("Enter the limit: ");
    scanf("%d", &num);

    count = num;
    while (count > 0)
    {
        printf("%d ", count);
        count--;
    }
    return 0;
}