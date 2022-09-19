#include <stdio.h>

int main()
{
    int principal = 100, rate = 4, years = 1, simpleInterest;
    simpleInterest = (principal * rate * years) / 100;
    printf("The value of Simple Interest is %d", simpleInterest);
    return 0;
}