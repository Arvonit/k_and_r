/**
 * 4.1
 * This program prints out any line in a file that contains a phrase.
 * Usage: find < file
 */

#include <stdio.h>

#define MAX_LINE_LENGTH 1000

int get_line_length(char line[], int max);
int find_phrase(char source[], char phrase[]);

char phrase[] = "void";

int main(void)
{
    char line[MAX_LINE_LENGTH];
    int found = 0;

    while (get_line_length(line, MAX_LINE_LENGTH) > 0) {
        if (find_phrase(line, phrase) >= 0) {
            printf("%s", line);
            found++;
        }
    }

    return found;
}

int get_line_length(char line[], int max)
{
    int character;
    int length = 0;

    while (--max > 0 && (character = getchar()) != EOF && character != '\n') {
        line[length++] = character;
    }

    if (character == '\n') {
        line[length++] = character;
    }

    line[length] = '\0';

    return length;
}

int find_phrase(char source[], char phrase[])
{
    int j, k;

    for (int i = 0; source[i] != '\0'; i++) {
        for (j = i, k = 0; phrase[k] != '\0' && source[j] == phrase[k]; j++, k++)
            ;
        if (k > 0 && phrase[k] == '\0') {
            return i;
        }
    }

    return -1;
}
