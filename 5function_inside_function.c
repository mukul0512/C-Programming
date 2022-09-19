#include <stdio.h>

void goodMorning();   // Function prototype
void goodAfternoon(); // Function prototype
void goodEvening();   // Function prototype
void goodNight();     // Function prototype

int main()
{
    printf("Hello Mukul!\n");
    goodMorning(); // Function call
    printf("Hello Karnwal!\n");
    return 0;
}
// function definition
void goodMorning()
{
    printf("Good Morning! Mukul.\n");
    goodAfternoon();
}
// function definition
void goodAfternoon()
{
    printf("Good Afternoon! Mukul.\n");
    goodEvening();
}
// function definition
void goodEvening()
{
    printf("Good Evening! Mukul.\n");
    goodNight();
}
// function definition
void goodNight()
{
    printf("Good Night! Mukul.\n");
}