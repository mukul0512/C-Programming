#include <stdio.h>

int main()
{
    int mukul = 1998;
    int *peeyush = &mukul; // peeyush will now store the address of mukul
    // %u is a formate specifire used for storing the address of a pointer
    printf("The value of mukul is %d\n", mukul);
    printf("The value of mukul is %d\n", *peeyush);
    printf("The address of mukul is %u\n", &mukul);
    printf("The address of mukul is %u\n", peeyush);
    printf("The value of peeyush is %d\n", *(&peeyush));
    printf("The value of peeyush is %d\n", mukul);
    printf("The address of peeyush is %u\n", &peeyush);
    return 0;
}