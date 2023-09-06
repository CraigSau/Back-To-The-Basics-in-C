#include <stdio.h>

/* Print Fahrenheit-Celcius Table*/

main()
{
    float fahr, celcius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    printf("Temperature Chart\n");
    printf("----------------------\n");

    while (fahr <= upper)
    {
        celcius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f %6.2f\n", fahr, celcius);
        fahr = fahr + step;
    }
}