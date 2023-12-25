#include <stdio.h>

struct Employee
{
    char firstName[50];
    char lastName[50];
    char category[50];
    char address[100];
    float basicSalary;
    float grossSalary;
};

void displayDetails(struct Employee e)
{
    printf("Name: %s %s\n", e.firstName, e.lastName);
    printf("Address: %s\n", e.address);
    printf("Gross Salary: Rs %.2f\n", e.grossSalary);
}

void incrementSalary(struct Employee *e, float percInc)
{
    e->basicSalary += e->basicSalary * (percInc / 100);
    e->grossSalary = e->basicSalary + (e->basicSalary * 0.5) + (e->basicSalary * 0.1);
}

int main()
{
    struct Employee e;

    printf("Enter First Name: ");
    scanf("%s", e.firstName);

    printf("Last Name: ");
    scanf("%s", e.lastName);

    printf("Category: ");
    scanf("%s", e.category);

    printf("Address: ");
    getchar();
    fgets(e.address, sizeof(e.address), stdin);

    for (int i = 0; i < sizeof(e.address); i++)
    {
        if (e.address[i] == '\n')
        {
            e.address[i] = '\0';
            break;
        }
    }

    printf("Basic Salary: ");
    scanf("%f", &e.basicSalary);

    e.grossSalary = e.basicSalary + (e.basicSalary * 0.5) + (e.basicSalary * 0.1);
    displayDetails(e);

    float percInc;
    printf("\nEnter Percentage Increase: ");
    scanf("%f", &percInc);

    incrementSalary(&e, percInc);

    displayDetails(e);

    return 0;
}
