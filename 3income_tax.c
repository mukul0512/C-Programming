#include <stdio.h>

int main()
{
    float tax = 0, income;
    printf("Enter your annual income here\n");
    scanf("%f", &income);
    if (income >= 250000 && income <= 500000)
    {
        tax = tax + 0.05 * (income - 250000); // tax += 0.05
    }
    if (income >= 500000 && income <= 1000000)
    {
        tax = tax + 0.20 * (income - 500000); // tax += 0.20
    }
    if (income >= 1000000)
    {
        tax = tax + 0.30 * (income - 1000000); // tax += 0.30
    }
    printf("Your net income tax to be paid 6th of this month is %f\n", tax);
    return 0;
}