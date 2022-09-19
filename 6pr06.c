#include <stdio.h>

// void mukul(int *a);
void mukul(int a);

int main()
{
    int x = 3;
    printf("The address of variable x is %u\n", &x); // Function call
    printf("The value of variable x is %d\n", x); // Function call
    // mukul(&x);        // Will work due to call by reference
    mukul(x);        // Will not work due to call by value
    printf("The address of variable x is %u\n", &x); // After function call
    printf("The value of variable x is %d\n", x); // After function call
    return 0;
}

// void mukul(int *a)
void mukul(int a)
{
    int peeyush;
    // *a = *a * 10;
    peeyush = a * 10;
    printf("The address of variable a is %u\n", a);
}