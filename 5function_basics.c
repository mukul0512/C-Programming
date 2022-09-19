#include <stdio.h>

void display(); // Function Prototype

int main()
{
    int a;
    printf("Initializing display function.\n");
    display(); // Function call
    printf("Display function finished it's work.\n");
    return 0;
}
// Function definition
void display()
{
    printf("This is display.\n");
}