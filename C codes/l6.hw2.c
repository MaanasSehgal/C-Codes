// WAP to determine the eligibility for admission based on the following criteria:

// Eligibility Criteria:
// Marks in Maths>=65 and Marks in Phy>=55 and Marks in Chem>=50 and
// Total in all three subjects>=190 or Total in Maths and Physics >=140
#include <stdio.h>

int main()
{
    int mathMarks, phyMarks, chemMarks;
    printf("Enter the marks in maths, physics and chemistry: ");
    scanf("%d %d %d", &mathMarks, &phyMarks, &chemMarks);

    if (mathMarks >= 65 && phyMarks >= 55 && chemMarks >= 50 && (mathMarks + phyMarks + chemMarks) >= 190)
    {
        printf("You passed the eligibility criteria");
    }
    else
    {
        printf("You failed the eligibility criteria");
    }
    return 0;
}