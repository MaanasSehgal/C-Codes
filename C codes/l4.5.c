// The buying price, the marker price and discount are entered through keyboard. Sometimes seller gets profit or sometimes loss depending upon the discount. WAP to determine whether the seller has made profit or incurred loss. Also determine how much profit he made or loss he incurred.
#include <stdio.h>

int main()
{
    float buyPrice, markPrice, discount, sellPrice, percent;
    printf("Enter the buying price: \n");
    scanf("%f", &buyPrice);

    printf("Enter the marker price: \n");
    scanf("%f", &markPrice);

    printf("Enter the discount: \n");
    scanf("%f", &discount);

    sellPrice = markPrice - (discount / 100) * markPrice;

    if (sellPrice < buyPrice)
    {
        percent = ((buyPrice - sellPrice) / buyPrice) * 100;
        printf("Loss of %f percent", percent);
    }
    else if (sellPrice > buyPrice)
    {
        percent = ((sellPrice - buyPrice) / buyPrice) * 100;
        printf("Profit of %f percent", percent);
    }
    else if (sellPrice = buyPrice)
    {
        printf("Neither profit, nor loss");
    }
    else
    {
        printf("Data is not valid");
    }
    return 0;
}
