#include <stdio.h>

int main()
{
    int principal, rate, years, simpleInterest;
    printf("Enter the principal amount of simple interest\n");
    scanf("%d", &principal);
    printf("Enter the rate of simple interest\n");
    scanf("%d", &rate);
    printf("Enter the time period(in years) of simple interest\n");
    scanf("%d", &years);
    simpleInterest = (principal * rate * years) / 100;
    printf("The value of Simple Interest is %d", simpleInterest);
    return 0;
}