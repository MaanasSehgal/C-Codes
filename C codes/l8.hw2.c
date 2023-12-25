// WAP to find out 1/n!

#include <stdio.h>

int main()
{
    float num, ans = 0, numFact = 1;
    printf("Enter the value of n: ");
    scanf("%f", &num);

    for (int i = 1; i <= num; i++)
    {
        numFact *= i;
    }
    ans = (float)1 / (numFact);
    printf("The value of 1 / n! is %f", ans);
    return 0;
}