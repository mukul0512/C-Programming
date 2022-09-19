#include <stdio.h>

int main()
{
    int i, n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    for (i = 0; i < 3; i++)
    {
        printf("The first n natural number is %d\n", i + 1);
    }
    
    return 0;
}