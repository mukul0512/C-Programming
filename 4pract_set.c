#include <stdio.h>

int main()
{
    int i, sum = 0, n = 10;
    while (i <= n)
    {
        sum += i;
        i++;
    }
    printf("The value of sum(1 - 10) is %d\n", sum);

    return 0;
}