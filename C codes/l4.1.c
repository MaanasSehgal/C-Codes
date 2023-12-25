// WAP to convert given second into its equivalent hour, minute and second as per the following format.
#include <stdio.h>

int main()
{
    int timeInSec, sec, min, hr;
    printf("Enter the time in seconds: ");
    scanf("%d", &timeInSec);

    hr = timeInSec / 3600;
    min = (timeInSec % 3600) / 60;
    sec = (timeInSec % 3600) % 60;

    printf("Final time is %d hr %d min %d sec", hr, min, sec);

    return 0;
}