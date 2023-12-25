#include <stdio.h>
int main()
{
    int integerValue = 23;
    double doubleValue = 234.3;
    float floatValue = 2.525;
    char charValue = 'a';
    short shortValue = 23;
    
    printf("Integer is %d, Double is %lf, Float is %f, Character is %c, Short is %hd", integerValue, doubleValue, floatValue, charValue, shortValue);
    return 0;
}