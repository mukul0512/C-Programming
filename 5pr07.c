#include <stdio.h>
void printPattern(int n);

int main()
{
    int n = 3;
    printPattern(n);
    return 0;
}

// for n = 3
// *              1 - 1 star
// * * *          2 - 3 stars
// * * * * *      3 - 5 stars = (2 * n - 1) stars

void printPattern(int n)
{
    int i;
    if (n == 1)
    {
        printf("*\n");
        return;
    }
    printPattern(n - 1);
    for (i = 0; i < (2 * n - 1); i++)
    {
        printf("*");
    }
    printf("\n");
}