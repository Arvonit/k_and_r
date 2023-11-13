/**
 * 1.7
 * An overview of creating a function.
 */

#include <stdio.h>

// This declaration of a function is called a **function prototype**
int power(int base, int n);

int main(void)
{
    printf("%d\n", power(4, 4));
}

int power(int base, int n)
{
    // A recursive implementation of the power function
    /*
    if (n == 0) {
        return 1;
    } else {
        return base * power(base, n - 1);
    }
    */

    // An iterative implementation of the power function
    int value = 1;
    for (int i = 0; i < n; i++) {
        value *= base;
    }
    return value;
}
