#include<stdio.h>
int main()
{
    float celsius, fahrenheit;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) / 1.8;
    printf("%.2f Celsius = %.2f Fahrenheit",fahrenheit,celsius);
    return 0;
}
