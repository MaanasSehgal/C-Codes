// WAP to store user elements in a 2d array and print them.(Store temperature of two cities for a week and display it)

#include <stdio.h>

int main()
{
    int rows, columns = 7, cities;

    printf("Enter the number of cities: ");
    scanf("%d", &rows);

    int temp[rows][columns];

    printf("Enter the temperatures: \n");

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            scanf("%d", &temp[i][j]);
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d ", temp[i][j]);
        }
        printf("\n");
    }
    return 0;
}