/**
 * 1.5.4
 * This is basically a barebones implementation of wc.
 * Usage: count < file
 */

#include <stdio.h>

#define IN 1
#define OUT 0

int main(void)
{
    int character, line_count, word_count, character_count, state;

    state = OUT;
    line_count = word_count = character_count = 0;

    while ((character = getchar()) != EOF) {
        character_count++;

        if (character == '\n') {
            line_count++;
        }

        // If a character is a space, new line, or tab, the previous few characters must be a word
        if (character == ' ' || character == '\n' || character == '\t') {
            state = OUT;
        } else if (state == OUT) {
            state = IN;
            word_count++;
        }
    }

    // Output the following stats (on the same line):
    // 1. Number of lines in the file
    // 2. Number of words in the file
    // 3. Number of characters in the file
    printf("%d %d %d\n", line_count, word_count, character_count);
}
