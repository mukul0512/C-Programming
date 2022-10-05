#include <stdio.h>

int main()
{
    int i;
    printf("*****Multiplication table of 10 in reverse order*******\n\n");
    for (i = 10; i; i--)
    {
        printf("10 X %d = %d\n", i, 10 * i);
    }
    return 0;
}