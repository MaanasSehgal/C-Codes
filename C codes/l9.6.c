// WAP to print the following pattern
//  1 3 7 15 31……

#include <stdio.h>

int main()
{
    int num, a = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        printf("%d ", a);
        a = (a * 2) + 1;
    }
    return 0;
}