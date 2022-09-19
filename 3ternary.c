#include <stdio.h>

int main()
{
    int a;
    printf("Enter the value of a here\n");
    scanf("%d", &a);
    // One liner ternary operator
    ( a < 5 ) ? printf("a is less than 5\n") : printf("a is greater less than 5\n");
    return 0;
}