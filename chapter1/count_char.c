/**
 * 1.5.2
 * This is basically a barebones implementation of wc's character count feature.
 * Usage: count_char < file
 */

#include <stdio.h>

int main(void)
{
    // Implementation with a long int and while loop
    /*
    long nc = 0;
    while (getchar() != EOF) {
        nc++;
    }
    printf("%ld\n", nc);
    */

    // Implementation with a double and for loop
    double nc;
    for (nc = 0; getchar() != EOF; nc++)
        ;
    printf("%.0f\n", nc); // %.0f means print a floating point number with 0 zero decimal places
                          // (i.e, truncate `nc`)
}
