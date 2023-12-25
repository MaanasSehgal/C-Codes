// WAP to add two distances (in km-meter) using structures.

#include <stdio.h>

struct distance
{
    int km;
    int meter;
};

int main()
{
    int meter = 0, km = 0;
    struct distance s[2];

    for (int i = 0; i < 2; i++)
    {
        printf("Enter distance %d: ", i + 1);
        scanf("%d %d", &s[i].km, &s[i].meter);
    }

    for (int i = 0; i < 2; i++)
    {
        km += s[i].km;
        meter += s[i].meter;
    }

    if (meter >= 1000)
    {
        meter -= 1000;
        km++;
    }

    printf("Final distance: %d km %d m", km, meter);
    return 0;
}
