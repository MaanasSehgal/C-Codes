// WAP to display the grade system of KIIT University based on total marks secured by a
//  student in a semester. Use switch statement.

#include <stdio.h>

int main()
{
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);

    marks /= 10;
    switch (marks)
    {
    case 10:
        printf("Grade is O");
        break;

    case 9:
        printf("Grade is O");
        break;

    case 8:
        printf("Grade is E");
        break;

    case 7:
        printf("Grade is A");
        break;

    case 6:
        printf("Grade is B");
        break;

    case 5:
        printf("Grade is C");
        break;

    case 4:
        printf("Grade is D");
        break;

    default:
        printf("FAIL");
    }
    
    return 0;
}