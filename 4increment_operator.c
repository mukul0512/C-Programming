#include <stdio.h>

int main()
{
    int i = 5;
    int a = 4;
    printf("The value after i++ is %d\n", i++); // first print the value than increment
    printf("The value after i is %d\n", i);
    printf("The value after ++a is %d\n", ++a); // first increment the value than print
    printf("The value after a is %d\n", i);
    return 0;
}