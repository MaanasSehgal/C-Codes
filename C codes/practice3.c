#include <stdio.h>

// This checks if the year is a leap year or not
int isLeapYear(int year)
{
    return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
}

void addFunc(int date, int month, int year, int addDays)
{
    int arr[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    while (addDays != 0)
    {
        int daysInMonth = arr[month - 1];

        if (month == 2 && isLeapYear(year))
        {
            daysInMonth++;
        }

        // This checks the number of days left
        int daysToAdd = (daysInMonth - date) + 1;
        if (addDays >= daysToAdd)
        {
            addDays -= daysToAdd;
            date = 1;

            if (month < 12)
            {
                month++;
            }
            else
            {
                month = 1;
                year++;
            }
        }
        else
        {
            date += addDays;
            addDays = 0;
        }
    }

    printf("The final date is %02d:%02d:%04d.\n", date, month, year);
}

int main()
{
    int date, month, year, addDays;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter the date in format DD MM YYYY: ");
        scanf("%d %d %d", &date, &month, &year);

        printf("Enter the number of days you want to add: ");
        scanf("%d", &addDays);

        addFunc(date, month, year, addDays);
    }

    return 0;
}
