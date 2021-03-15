#include <stdio.h>

int main() {

    // creating variables for examples
    int a = 21;
    int c;

    // Simple assignment operator (=)
    c = a;
    printf("First example - = - Value of c = %d\n", c);

    // Add and assignment operator (+=)
    c += a;
    printf("Second example - += - Value of c = %d\n", c);

    // Subtract and assignment operator (-=)
    c -= a;
    printf("Third example - -= - Value of c = %d\n", c);

    // Multiply and assignment operator (*=)
    c *= a;
    printf("Fourth example - *= - Value of c = %d\n", c);

    // Divide and assignment operator (/=)
    c /= a;
    printf("Fifth example - /= - Value of c = %d\n", c);

    // Modulus and assignment operator (%=)
    c = 100;
    c %= a;
    printf("Sixth example - %= - Value of c = %d\n", c);

    // Left Shift and assignment operator (<<=)
    c <<= 2;
    printf("Seventh example - <<= - Value of c = %d\n", c);

    // Right Shift and assignment operator (>>=)
    c >>= 2;
    printf("Eighth example - >>= - Value of c = %d\n", c);

    // Bitwise AND and assignment operator (&=)
    c &= 2;
    printf("Ninth example - &= - Value of c = %d\n", c);

    // Bitwise exclusive OR and assignment operator (^=)
    c ^= 2;
    printf("Tenth example - ^= - Value of c = %d\n", c);

    // Bitwise inclusive OR and assignment operator (|=)
    c |= 2;
    printf("Eleventh example - |= - Value of c = %d\n", c);

    return 0;
}