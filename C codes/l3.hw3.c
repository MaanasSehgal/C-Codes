// Write a program to convert given paisa into its equivalent rupee and paisa as per the following format
#include <stdio.h>

int main()
{
    int amount, rupee, paisa;
    printf("Enter the amount: ");
    scanf("%d", &amount);
    paisa = (amount % 100);
    rupee = ((amount - paisa) / 100);

    // rupee = amount / 100;    
    printf("%d paisa = %d Rupee and %d paisa", amount, rupee, paisa);
    return 0;
}