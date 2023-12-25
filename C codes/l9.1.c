// WAP to find out sum of series up to n terms
//  1+22+33+……….+nn

#include <stdio.h>
#include <math.h>

int main()
{
    int num, ans = 0;

    printf("Enter the range: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        ans += pow(i, i);
    }

    printf("The answer is %d", ans);
    return 0;
}