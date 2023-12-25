// WAP to find out sum of series up to n terms.
//  (1 + 1/2 + 1/3………)

#include <stdio.h>

int main()
{
    int num;
    float finalSum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        finalSum += 1.0 / i;
    }

    printf("The sum for the series is %f", finalSum);
    return 0;
}
