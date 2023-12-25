// Write a program to find Fahrenheit for a given centigrade temperature
#include <stdio.h>

int main()
{
    float farTemp, celTemp;
    // temp in F is 9/5 (C + 32);
    printf("Enter the temperature in Celcius : ");
    scanf("%f", &celTemp);
    
    farTemp = (9 / 5) * (celTemp + 32);
    printf("The temperature in faranheit is : %f", farTemp);

    return 0;
}