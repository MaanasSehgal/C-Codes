#include <stdio.h>

int main()
{
    int date, month, year, daysInMonth;
    int arr[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    for (int i = 0; i < 10; i++)
    {
        printf("Enter the date in format DD MM YYYY: \n");
        scanf("%d %d %d", &date, &month, &year);

        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        {
            arr[1] = 29;
        }

        daysInMonth = arr[month - 1];

        if (date < daysInMonth)
        {
            date++;
        }
        else
        {
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

        printf("The next date is %d:%d:%d.\n", date, month, year);

        arr[1] = 28;
    }
    return 0;
}
