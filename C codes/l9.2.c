// WAP to find out sum of series up to n terms

#include <stdio.h>
#include <math.h>

int main()
{
    float num, ans = 0;

    printf("Enter a number: ");
    scanf("%f", &num);

    for (int i = 1; i <= num; i++)
    {
        ans += sqrt(i);
    }
    printf("The answer is %f", ans);
    return 0;
}