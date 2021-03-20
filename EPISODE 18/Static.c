#include<stdio.h>

// global decleration of variables
int a, b;

void print()
{
    // initialization of the global variables
    int a = 1; // this value is initialized every time function is called
    static int b = 100; // this value is only initialized once (static variable is only initialized once)
    
    // printing of the values
    printf("a = %d\n", a);
    printf("b = %d\n\n", b);
    
    // increment of variables
    a++;
    b++;
}

int main()
{
    //call the function 3 times
    print();
    print();
    print();

    return 0;
}
