#include <stdio.h>
#include <string.h>

struct student
{
    char name[100];
    int roll;
    float cgpa;
};

int main()
{
    struct student s1 = {"Maanas", 2305547, 9.1};
    return 0;
}