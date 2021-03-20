// show that variable inside of functions cant be accesed in other functions
#include <stdio.h> 

// global variable declared
int b = 7;

int main () {

  // local variable declared
  int a = 13;
 
  printf ("value of a = %d, b = %d", a, b);
 
  return 0;
}