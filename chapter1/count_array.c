/**
 * 1.6
 * This program prints out a count of each digit, whitespace, and any other character. It also uses
 * an array to hold the count of each digit.
 * Usage: count_array < file
 */

#include <stdio.h>

int main(void)
{
    int character, whitespace_count, other_count;
    int digit_count[10]; // 0-9

    // Initialize everything to 0
    whitespace_count = other_count = 0;
    for (int i = 0; i < 10; i++) {
        digit_count[i] = 0;
    }

    // Read each character and increment a count variable based on the character
    while ((character = getchar()) != EOF) {
        if (character >= '0' && character <= '9') {
            // `character - '0'` subtracts the value of '0' (ASCII) from the value of `character`
            // (after all, it is an integer), so if the character is '1', the subscript will be 1
            digit_count[character - '0']++;
        } else if (character == ' ' || character == '\n' || character == '\t') {
            whitespace_count++;
        } else {
            other_count++;
        }
    }

    // Output the number of each digit (0-9), number of whitespace, and number of other characters
    printf("digits =");
    for (int i = 0; i < 10; i++) {
        printf(" %d", digit_count[i]);
    }
    printf(", whitespace = %d, other = %d\n", whitespace_count, other_count);
}
