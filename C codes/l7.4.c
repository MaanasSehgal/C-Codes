// WAP to take 10 different numbers as input. Print their sum and average.
#include <stdio.h>

int main()
{
    float sum = 0, average = 0, num;
    int count = 1;
    printf("Enter 10 numbers ");
    while (count <= 10)
    {
        scanf("%f", &num);

        sum += num;
        count++;
    }
    average = sum / 10;

    printf("The sum is %.2f and the average is %.2f", sum, average);
    return 0;
}