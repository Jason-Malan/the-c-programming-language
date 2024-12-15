#include <stdio.h>

/* print Fahrenheit-Celsius table 
for fahr = 0, 20, ... , 300 */
int main(int argc, char const *argv[])
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("Fahrenheit-Celsius table\n");

    fahr = lower;
    while (fahr < upper)
    {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

    return 0;
}