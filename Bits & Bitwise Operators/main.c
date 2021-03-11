#include <stdio.h>

int main(){

    //Consider integer 21 its binary representation is 00010101
    //Consider integer 3 its binary representation is 00000011
    int n = 21, p = 3;
    int x, y;

    x = n & p;
    y = n | p;

    //x = 00000001
    //y = 00010111

    return 0;
}