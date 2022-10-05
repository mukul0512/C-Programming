#include <stdio.h>

int main()
{
    int i, sum = 0, n = 10;
    do
    {
        sum += i;
        printf("The value of sum(1 to 10) is %d\n", sum);
        i++;
    } while (i <= n);

    return 0;
}