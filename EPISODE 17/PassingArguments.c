#include <stdio.h> // also show calling the function before the the main 

// making the function and cretaing the variable type that it would need to be passed
int Greeting(char x[])
{
    printf("Hello %s", x);

    return 0;
}

int main() 
{
    // creating variable that will be passed in function
    char name[] = "Jovan";
    
    // function that passes the name variable
    Greeting(name);
    
    return 0;
}