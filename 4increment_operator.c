#include <stdio.h>

int main()
{
    int i = 5;
    int a = 4;
    // Pehle print kare fir increment kare in post-increment i.e. i++ 
    printf("The value after i++ is %d\n", i++); // first print the value than increment
    printf("The value of i is %d\n", i);
    // Pehle increment kare fir print kare in pre-increment i.e. ++i
    printf("The value after ++a is %d\n", ++a); // first increment the value than print
    printf("The value of a is %d\n", i);

    i +=10; // increment i by 10
    printf("The value of i is %d\n", i);

    a +=10; // increment a by 10
    printf("The value of a is %d\n", a);
    return 0;
}