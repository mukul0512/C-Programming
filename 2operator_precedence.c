#include <stdio.h>

int main(){
    int a = 1, b = 2;

// Operators of higher priority are evaluated first only in the absence of parenthesis
    // Priority         Operator
    // First             * / %
    // Second            +  -
    // Third               =
    // Never used B O D M A S Rule here
    printf("The value of 3 * a - 8 * b is %d\n", 3 * a - 8 * b);
    printf("The value of 8 * a / 3 * b is %d\n", 8 * a / 3 * b); // (8 * 1) / (3 * 2) will give wrong answer
    // The correct way to solve such question by using operator associativity ---> 
    // Rule : Here  * and / follows left to right associativity 
    // (8 * 1) / 3 * 2 = (8 / 3) * 2 = 2 * 2 = 4
    return 0;
}