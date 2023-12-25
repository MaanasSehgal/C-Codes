// WAP to sum the following series S=1+(1+2)+(1+2+3)+...+(1+2+3+...+n)
#include <stdio.h>

int main()
{
    int num, sum = 0, finalSum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &num);

    if (num == 1)
    {
        finalSum = num;
        printf("%d", finalSum);
    }
    else
    {
        for (int i = 1; i <= num; i++)
        {
            sum = 0;
            for (int j = 1; j <= i; j++)
            {
                sum += j;
            }
            finalSum += sum;
        }
        printf("The final sum is %d", finalSum);
    }

    return 0;
}
