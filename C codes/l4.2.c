// WAP to convert a distance in meter entered through keyboard into its equivalent kilometer and meter as per the following format.

#include <stdio.h>

int main()
{
    int meterDistance, km, meter;
    printf("Enter the distance in meter: ");
    scanf("%d", &meterDistance);
    // 2430

    km = (meterDistance - (meterDistance % 1000)) / 1000;
    meter = meterDistance % 1000;

    printf("%d meters = %d km and %d meters", meterDistance, km, meter);
    return 0;
}