#include <stdio.h>

int main()
{
    int a = 4;
    // int b = 8.5; // Not recommended because 8.5 is not an integer
    float b = 8.5;
    char c = 'M';
    int d = 45;
    int e = 4 + 45;
    printf("The value of a is %d \n", a);
    printf("The value of b is %f \n", b);
    printf("The value of vc is %c \n", c);
    printf("The sum of a and d is %d \n", a + d);
    printf("The sum of a and d is %d \n", e);
    return 0;
}