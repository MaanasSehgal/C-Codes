// WAP to find out factors of a number.
#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Factors are: \n");
    for (int i = 1; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            printf("%d ", i);
            // This line basically checks for values greater than sqrt(num) like the number itself
            if (i != num / i)
            {
                // printf("executed");
                printf("%d ", num / i);
            }
        }
    }
    return 0;
}
