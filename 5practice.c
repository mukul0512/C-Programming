#include <stdio.h>

void goodMorning();   // Function prototype
void goodAfternoon(); // Function prototype
void goodEvening();   // Function prototype
void goodNight();     // Function prototype

int main()
{
    // printf("");
    goodMorning();   // Function call
    goodAfternoon(); // Function call
    goodEvening();   // Function call
    goodNight();     // Function call
    // printf("");
    return 0;
}
// function definition
void goodMorning()
{
    printf("Good Morning! Mukul.\n");
}
// function definition
void goodAfternoon()
{
    printf("Good Afternoon! Mukul.\n");
}
// function definition
void goodEvening()
{
    printf("Good Evening! Mukul.\n");
}
// function definition
void goodNight()
{
    printf("Good Night! Mukul.\n");
}