#include <stdio.h>

int pow(int power)
{
    int ans = 1;
    for (int i = 0; i < power; i++)
    {
        ans *= 2;
    }
    return ans;
}

int convert(int num, int power, int sum)
{
    if (num == 0)
    {
        return sum;
    }
    int lastdigit = num % 10;
    sum += lastdigit * pow(power);
    convert(num / 10, power + 1, sum);
}

int main()
{
    int num;

    printf("Enter the binary number: ");
    scanf("%d", &num);

    int ans = convert(num, 0, 0);
    printf("The number is: %d", ans);
    return 0;
}