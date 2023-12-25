// WAP to declare a union named as ABC having three members a, b and c as character, integer
// and double respectively. Assign user entered values to these members respectively one by one and display these values immediately. Again, assign these user entered values to a, b, c one by
// one, all together and display these values at last. Find the difference.

#include <stdio.h>

union abc
{
    char a;
    int b;
    double c;
};

int main()
{
    union abc s1;

    printf("Enter the integer: ");
    scanf("%d", &s1.b);

    printf("Enter the character: ");
    scanf(" %c", &s1.a);

    printf("Enter the double: ");
    scanf("%lf", &s1.c);

    printf("%c %d %lf", s1.a, s1.b, s1.c);
    return 0;
}