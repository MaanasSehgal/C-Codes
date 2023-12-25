// WAP to print the natural numbers from 1 to n (value of n is user input).
#include <stdio.h>

int main()
{
    int num, count = 1;

    printf("Enter the limit: ");
    scanf("%d", &num);

    while (count <= num)
    {
        printf("%d ", count);
        count++;
    }
    return 0;
}