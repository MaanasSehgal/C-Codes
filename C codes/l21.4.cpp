// WAP to add two times (in hr-min-sec) by passing structure to a function.

#include <stdio.h>

struct time
{
    int hr;
    int min;
    int sec;
};

int main()
{
    int hr = 0, min = 0, sec = 0;
    struct time s[2];

    for (int i = 0; i < 2; i++)
    {
        printf("Enter time %d: ", i + 1);
        scanf("%d %d %d", &s[i].hr, &s[i].min, &s[i].sec);
    }

    for (int i = 0; i < 2; i++)
    {
        hr += s[i].hr;
        min += s[i].min;
        sec += s[i].sec;
    }

    if (sec >= 60)
    {
        sec -= 60;
        min++;
    }

    if (min >= 60)
    {
        min -= 60;
        hr++;
    }

    printf("Final time: %d hr %d min %d sec", hr, min, sec);
    return 0;
}