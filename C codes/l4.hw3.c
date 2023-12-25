// WAP to add two times in hour, minute & second format entered through the keyboard in the format hh:mm:ss

#include <stdio.h>

int main()
{
    int hr1, min1, sec1, hr2, min2, sec2, timeSec1, timeSec2, finalTime, hrFinal, minFinal, secFinal;
    printf("Enter hr1 min1 sec1: ");
    scanf("%d %d %d", &hr1, &min1, &sec1);

    printf("Enter hr2 min2 sec2: ");
    scanf("%d %d %d", &hr2, &min2, &sec2);
    secFinal = sec1 + sec2;
    minFinal = min1 + min2;
    hrFinal = hr1 + hr2;

    if (secFinal >= 60)
    {
        secFinal -= 60;
        minFinal++;
    }

    if (minFinal >= 60)
    {
        minFinal -= 60;
        secFinal++;
    }

    printf("Final Time is %d hr %d min %d sec", hrFinal, minFinal, secFinal);

    return 0;
}