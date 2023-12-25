#include <stdio.h>

void decToBinary(int num);

int main()
{
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    decToBinary(num);
    return 0;
}

void decToBinary(int num)
{
    int binaryNum[32];
    int i = 0;

    while (num > 0)
    {
        binaryNum[i] = num % 2;
        num = num / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", binaryNum[j]);
    }
}