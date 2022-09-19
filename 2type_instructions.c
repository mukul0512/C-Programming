#include <stdio.h>

int main()
{
    // int a = 2; // Type declaration instruction
    int a = 2, b, c; // Type declaration instruction
    b = c = a;
    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);
    printf("The value of c is %d\n", c);
    float p = 1.1;
    float q = p + 2.1;
    // The compiler will through an error i.e. p is undeclared when the order of p and q are as follows
    // float q = p + 2.1;
    // float p = 1.1;
    printf("The value of q is %f\n", q);
    return 0;
}