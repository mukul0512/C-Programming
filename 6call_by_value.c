#include <stdio.h>
int sum(int a, int b); // Function prototype

int main()
{
    int x = 4, y = 7;
    printf("The value of x and y is %d and %d\n", x, y); // Function call
    printf("The value of 4 + 7 is %d\n", sum(x, y));
    printf("The value of x and y is %d and %d\n", x, y); // After function call
    return 0;
}
// Function definition
int sum(int a, int b){
    int c;
    c = a + b;
    b = 1234;
    a = 4321;
    return c;
}