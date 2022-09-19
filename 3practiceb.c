#include <stdio.h>

int main(){
    float celsius, fahrenheit;
    printf("Enter the value of temperature in celsius\n");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9/5) + 32;
    printf("The value of this celsius temperature in fahrenheit is %f\n", fahrenheit);
    return 0;
}