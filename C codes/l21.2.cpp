// WAP to store n students’ information (i.e. student’s roll no, name, gender, marks in 5 subjects
// etc) of an educational institute and display all the data with total marks of each student, using
// array of structure. If full mark of each subject is considered as 100 and pass mark as 40, then
// display the list of students failed in a particular subject.

#include <stdio.h>

struct student
{
    char name[100];
    int roll;
    char gender;
    int m1;
    int m2;
    int m3;
    int m4;
    int m5;
};

int main()
{
    int n, totalMarks, failCount = 0;

    printf("Enter the number of students: \n");
    scanf("%d", &n);

    struct student s[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter data for student %d: \n", i + 1);

        printf("Enter the name: ");
        scanf(" %s", &s[i].name);

        printf("Enter the roll no: ");
        scanf("%d", &s[i].roll);

        printf("Enter the gender (M/F): ");
        scanf(" %c", &s[i].gender);

        printf("Enter the marks in Maths: ");
        scanf("%d", &s[i].m1);

        printf("Enter the marks in Physics: ");
        scanf("%d", &s[i].m2);

        printf("Enter the marks in Sc.Ls: ");
        scanf("%d", &s[i].m3);

        printf("Enter the marks in EVS: ");
        scanf("%d", &s[i].m4);

        printf("Enter the marks in SPH: ");
        scanf("%d", &s[i].m5);

        printf("\n");
    }

    printf("\n\n---ALL STUDENTS DATA---\n\n");

    for (int i = 0; i < n; i++)
    {
        printf("Data of Student %d\n\n", (i + 1));
        puts(s[i].name);
        printf("Roll No: %d\n", s[i].roll);
        printf("Gender: %c\n", s[i].gender);
        printf("Marks in Maths: %d\n", s[i].m1);
        printf("Marks in Physics: %d\n", s[i].m2);
        printf("Marks in Sc.Ls: %d\n", s[i].m3);
        printf("Marks in EVS: %d\n", s[i].m4); 
        printf("Marks in SPH: %d\n", s[i].m5);
        totalMarks = s[i].m1 + s[i].m2 + s[i].m3 + s[i].m4 + s[i].m5;
        printf("Total Marks: %d\n\n", totalMarks);

        if (s[i].m1 < 40 || s[i].m2 < 40 || s[i].m3 < 40 || s[i].m4 < 40 || s[i].m5 < 40)
        {
            failCount++;
        }
    }
    printf("\n\nNUMBER OF FAILED STUDENTS = %d", failCount);
    return 0;
}