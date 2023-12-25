// WAP to print the following pattern for rows = 4

#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}