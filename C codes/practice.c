// Subtract 2 times;

#include <stdio.h>

int main()
{
    int hr1, min1, sec1, hr2, min2, sec2, hrFinal, minFinal, secFinal;

    printf("Enter Time 1: ");
    scanf("%d %d %d", &hr1, &min1, &sec1);

    printf("Enter Time 2: ");
    scanf("%d %d %d", &hr2, &min2, &sec2);

    // hr1 = 11, min1 = 6, sec1 = 30, hr2 = 9, min2 = 34, sec2 = 40;

    // c = (a > b)?a:b;
    secFinal = sec1 - sec2;
    minFinal = min1 - min2;
    hrFinal = hr1 - hr2;

    // printf("Final time1 is %d hr %d min %d sec\n", hrFinal, minFinal, secFinal);

    (secFinal < 0) ? minFinal-- : secFinal;
    // printf("Final time2 is %d hr %d min %d sec\n", hrFinal, minFinal, secFinal);

    secFinal = (secFinal < 0) ? secFinal + 60 : secFinal;
    // printf("Final time3 is %d hr %d min %d sec\n", hrFinal, minFinal, secFinal);

    (minFinal < 0) ? hrFinal-- : minFinal;
    // printf("Final time4 is %d hr %d min %d sec\n", hrFinal, minFinal, secFinal);

    minFinal = (minFinal < 0) ? minFinal + 60 : minFinal;
    // printf("Final time5 is %d hr %d min %d sec\n", hrFinal, minFinal, secFinal);

    printf("Final time is %d hr %d min %d sec\n", hrFinal, minFinal, secFinal);

    return 0;
}
