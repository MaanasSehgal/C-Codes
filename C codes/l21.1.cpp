// WAP to store one student’s information (i.e. student’s roll no, name, gender, marks etc) of an
// educational institute and display all the data, using structure

#include <stdio.h>
#include <string.h>

struct student
{
    char name[100];
    int roll;
    char gender;
    int marks;
};

int main()
{
    struct student s1;

    printf("Enter the name: ");
    fgets(s1.name, 100, stdin);

    printf("Enter the roll no: ");
    scanf("%d", &s1.roll);

    printf("Enter the gender (M/F): ");
    scanf(" %c", &s1.gender);

    printf("Enter the marks: ");
    scanf("%d", &s1.marks);

    printf("Students name: %s\n", s1.name);
    printf("Students rollno: %d\n", s1.roll);
    printf("Students gender: %c\n", s1.gender);
    printf("Students marks: %d\n", s1.marks);

    return 0;
}