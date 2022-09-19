#include <stdio.h>

int main()
{
    int i = 1, n, res;
    printf("Enter the value of n to print the table that you want to print\n");
    scanf("%d", &n);
    do
    {
        res = n * i;
        printf("%d X %d = %d \n", n, i, res);
        i++;
    } while (i <= 10);

    return 0;
}