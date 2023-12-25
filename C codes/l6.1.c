/*WAP to display the grade system of KIIT University based on total marks secured by a student in a
semester. Assume marks are integer values. Use multiple if-else statement.
The grade is calculated is as follows:
Marks Grade
90 to 100 O
80 to 89 E
70 to 79 A
60 to 69 B
50 to 59 C
40 to 49 D
< 40 F*/
#include <stdio.h>

int main()
{
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);

    if (marks >= 90 && marks <= 100)
    {
        printf("Grade is O");
    }
    else if (marks >= 80 && marks <= 89)
    {
        printf("Grade is E");
    }
    else if (marks >= 70 && marks <= 79)
    {
        printf("Grade is A");
    }
    else if (marks >= 60 && marks <= 69)
    {
        printf("Grade is B");
    }
    else if (marks >= 50 && marks <= 59)
    {
        printf("Grade is C");
    }
    else if (marks >= 40 && marks <= 49)
    {
        printf("Grade is D");
    }
    else if (marks < 40)
    {
        printf("FAILED");
    }
    return 0;
}