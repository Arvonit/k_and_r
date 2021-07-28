/**
 * 1.5.1
 * This is pretty much a naive implementation of cat.
 * Usage: copy_file < file
 */

#include <stdio.h>

int main(void)
{
    int character;

    while ((character = getchar()) != EOF) {
        putchar(character);
    }
}
