// Write a C program to convert a string of digits into an integer value.
#include <stdio.h>

int convertString(char str[])
{
    char nums[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int element = 0, ans = 0;
    for (int i = 0; str[i + 1] != '\0'; i++)
    {
        for (int j = 0; j <= 9; j++)
        {
            if (str[i] == nums[j])
            {
                element = j;
                break;
            }
        }
        ans = (ans * 10) + element;
    }
    return ans;
}

int main()
{
    char str[100];

    printf("Enter the string: ");
    fgets(str, 100, stdin);

    int ans = convertString(str);
    printf("%d", ans);
    return 0;
}