#include <stdio.h>

int main() {

    //Consider integer 21 it's binary represantation is 00010101
    int n = 21;
    int x, y, z;

    x = n << 2;
    y = n >> 1;
    z = ~ n;

    //x = 01010100
    //y = 00001010
    //z = 11101010

    return 0;
}