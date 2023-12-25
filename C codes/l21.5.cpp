// WAP to store n employees’ data such as employee name, gender, designation, department, basic pay etc using structures with dynamically memory allocation. Calculate the gross pay of each employee as follows:
// Gross pay=basic pay + HR + DA HR=25% of basic, DA=75% of basic
#include <stdio.h>
#include <stdlib.h>

struct Employee
{
    char name[50];
    char gender;
    char designation[50];
    char department[50];
    float basicPay;
};

void calculateGrossPay(struct Employee *employee)
{
    float HR = 0.25 * employee->basicPay;
    float DA = 0.75 * employee->basicPay;
    float grossPay = employee->basicPay + HR + DA;
    printf("\nEmployee: %s\nGross Pay: %.2f\n\n", employee->name, grossPay);
}

int main()
{
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct Employee *employees = (struct Employee *)malloc(n * sizeof(struct Employee));

    for (int i = 0; i < n; i++)
    {
        printf("Enter details for Employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Gender (M/F): ");
        scanf(" %c", &employees[i].gender);
        printf("Designation: ");
        scanf(" %s", employees[i].designation);
        printf("Department: ");
        scanf("%s", employees[i].department);
        printf("Basic Pay: ");
        scanf("%f", &employees[i].basicPay);
    }

    for (int i = 0; i < n; i++)
    {
        calculateGrossPay(&employees[i]);
    }
    free(employees);

    return 0;
}
