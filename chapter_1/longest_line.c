/**
 * 1.9
 * This program prints out the longest line in a file.
 * Usage: longest_line < file
 */

#include <stdio.h>

#define MAX_LINE_LENGTH 1000

int get_line_length(char line[], int max_line_length);
void copy(char from[], char to[]);

int main(void)
{
    int length;
    int max = 0;
    char current_line[MAX_LINE_LENGTH]; // char[] = string
    char longest_line[MAX_LINE_LENGTH];

    while ((length = get_line_length(current_line, MAX_LINE_LENGTH)) > 0) {
        if (length > max) {
            max = length;
            copy(current_line, longest_line);
        }
    }

    // Print the result if the file is not blank
    if (max > 0) {
        printf("%s", longest_line);
    }

    return 0;
}

int get_line_length(char line[], int max_line_length)
{
    int length;
    int character;

    // Copy every character of the current line into `line`
    for (length = 0;
         length < max_line_length - 1 && (character = getchar()) != EOF && character != '\n';
         length++) {
        line[length] = character;
    }

    // Remember to add the new line character to the length if it exists
    if (character == '\n') {
        line[length] = character;
        length++;
    }

    // Terminate the string
    line[length] = '\0';

    return length;
}

void copy(char from[], char to[])
{
    int i = 0;
    // Copy until the string ends
    while ((to[i] = from[i]) != '\0') {
        i++;
    }
}
