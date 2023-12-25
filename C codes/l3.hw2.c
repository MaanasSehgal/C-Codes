// Write a program to find the average mark of 5 subjects of a student and find the percentage. Assume the full marks of each subject is 200. All the input must be given by user
#include <stdio.h>

int main()
{
    int english, hindi, maths, science, sst;
    float avgMarks, percentage;
    printf("Enter your marks of English, Hindi, Maths, Science, SST: ");
    scanf("%d %d %d %d %d", &english, &hindi, &maths, &science, &sst);

    avgMarks = (english + hindi + maths + science + sst) / 5;
    percentage = (avgMarks / 200) * 100;

    printf("The average of your marks is: %f and percentage is: %f", avgMarks, percentage);

    return 0;
}