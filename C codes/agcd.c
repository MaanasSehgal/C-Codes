#include <stdio.h>
#include <math.h>

int countDigits(int num)
{
    int count = 0;
    while (num != 0)
    {
        count++;
        num /= 10;
    }
    return count;
}

int power(int n, int length)
{
    int mul = 1;
    for (int i = 0; i < length; i++)  
    {
        mul *= n;
    }
    return mul;
}

int main()
{
    int n = 1531;
    int nCopy = n;
    int length = countDigits(n);
    int sum = 0;

    while (n != 0)
    {
        int lastDigit = n % 10;
        sum += power(lastDigit, length);
        n /= 10;
    }

    if (sum == nCopy)
    {
        printf("Armstrong");
    }
    else
    {
        printf("Not Armstrong");
    }

    return 0;
}
