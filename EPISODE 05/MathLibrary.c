#include <stdio.h>
#include <math.h>

int main() {

    // making a variable of value 10 and 20
    float x = 10.5,  y = 20;

    // MAX of two number
    int i = fmax(x, y);
    printf("The larger number is: %d\n", i);

    // MIN of two number
    i = fmin(x, y);
    printf("The smaller number is: %d\n", i);

    // Absolute Value
    i = fabs(x);
    printf("The absolute number of x is: %d\n", i);

    // Rounds the number
    i = round(x);
    printf("The rounded number of x is: %d\n", i);

    // removes the , 
    i = trunc(x);
    printf("When removed , the number of x is: %d\n", i);

    // Rounds the number to top
    i = ceil(x);
    printf("The rounded number to top x is: %d\n", i);

    // Rounds the number to bottom
    i = floor(x);
    printf("The rounded number to bottom x is: %d\n", i);

    // Returns e raised to x
    i = exp(x);
    printf("e raised to x is: %d\n", i);

    // Returns 2 raised to x
    i = exp2(x);
    printf("2 raised to x is: %d\n", i);

    // Returns the base-e logarithm of x
    i = log(x);
    printf("The base-e logarithm of x is: %d\n", i);

    // Returns the base-10 logarithm of x
    i = log10(x);
    printf("The base-10 logarithm of x is: %d\n", i);

    // Returns the base-2 logarithm of x
    i = log2(x);
    printf("The base-2 logarithm of x is: %d\n", i);

    // Returns x to the power of y
    i = pow(x, y);
    printf("X returned to the power of y: %d\n", i);

    // Returns square root of 
    i = sqrt(x);
    printf("X's square root is: %d\n", i);

    // Returns the 3rd root of x
    i = cbrt(x);
    printf("X's 3rd square root is: %d\n", i);

    // Returns the sine of x
    i = sin(x);
    printf("The sine of x is: %d\n", i);

    // Returns cosine of x
    i = cos(x);
    printf("The cosine of x is: %d\n", i);

    // Returns tangent of x
    i = tan(x);
    printf("The tangent of x is: %d\n", i);

    // Returns the arc sine of x
    i = asin(x);
    printf("The arc sine of x is: %d\n", i);

    // Returns the arc cosine of x
    i = acos(x);
    printf("The arc cosine of x is: %d\n", i);

    // Returns the arc tangent of x
    i = atan(x);
    printf("The arc tangent of x is: %d\n", i);

    // Returns the arc tangent in radians
    i = atan2(x, y);
    printf("The arc tangent in radians of x is: %d", i);

    return 0;
}