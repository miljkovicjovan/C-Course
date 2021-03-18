#include <stdio.h>
 
// declaring the function
int max(int num1, int num2);
 
int main () {

   // making the variables
   int a, b, result;
   
   // taking input
   printf("Enter two numbers to find the bigger number: ");
   scanf("%d%d", &a, &b);
 
   // assigning the functions return to the result variable
   result = max(a, b);
 
   printf("The bigger number is : %d\n", result);
 
   return 0;
}
 
// creating the function
int max(int num1, int num2) {

   // make the local variable
   int result;
 
    // calculating which is bigger and assigning 
    if (num1 > num2)
      result = num1;
    else
      result = num2;
 
    // returning the result
    return result; 
}