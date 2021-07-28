/**
 * 1.5.3
 * This is basically a barebones implementation of wc's line count feature.
 * Usage: count_line < file
 */

#include <stdio.h>

int main(void)
{
    int character;
    int line_count = 0;

    while ((character = getchar()) != EOF) {
        if (character == '\n') {
            line_count++;
        }
    }

    printf("%d\n", line_count);
}
