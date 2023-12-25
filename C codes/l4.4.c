// WAP to find the sum of all digits of a three-digit number. Number must be a user input.
#include <stdio.h>

int main()
{
    int num, pos1, pos2, pos3, sum;
    printf("Enter a three digit number: ");
    scanf("%d", &num);

    pos1 = num / 100;
    pos2 = ((num % 100) - ((num % 100) % 10)) / 10;
    pos3 = (num % 100) % 10;
    sum = pos1 + pos2 + pos3;
    printf("The three numbers are %d , %d , %d\n The sum is %d", pos1, pos2, pos3, sum);
    return 0;
}