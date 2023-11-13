/**
 * 1.2
 * This generates a table of temperatures in fahrenheit converted to celsius.
 * Usage: temperature
 */

#include <stdio.h>

// Symbolic constants
#define LOWER_BOUND = 0
#define UPPER_BOUND = 300
#define STEP = 20

int main(void)
{
    float fahrenheit, celsius;
    int lower_bound = 0;
    int upper_bound = 300;
    int step = 20;

    // 1-3: Table header
    printf("Fahrenheit\tCelsius\n");

    fahrenheit = lower_bound;
    while (fahrenheit <= upper_bound) {
        // Convert fahrenheit to celsius
        celsius = (5.0 / 9.0) * (fahrenheit - 32.0);
        // Print table with farenheit on left and celsius on right
        printf("%10.0f\t%7.1f\n", fahrenheit, celsius);
        // Increment temperature by `step`
        fahrenheit += step;
    }

    // 1-4: Celsius to Fahrenheit table
    /*
    printf("Celsius\tFahrenheit\n");

    celsius = lower_bound;
    while (celsius <= upper_bound) {
        // Convert celsius to fahrenheit
        fahrenheit = celsius * (9.0 / 5.0) + 32.0;
        // Print table with celsius on left and fahrenheit on right
        printf("%7.0f\t%10.0f\n", celsius, fahrenheit);
        // Increment temperature by `step`
        celsius += step;
    }
    */
}
