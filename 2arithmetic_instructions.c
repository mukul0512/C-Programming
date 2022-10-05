#include <stdio.h>
#include <math.h>

int main(){
    int x = 1, y = 2;
    int z;
    z = y * x;
    int a = 3.5; // 3.5(float) will be demoted to 3(int) because a is not able to store floats
    float b = 3; // 3(int) will be promoted to 3.0(float) because b is not able to store int
    // y * x = z; // error: lvalue required as left operand of assignment
    printf("The value of a is %d\n", a); // Result is 3 demoted
    printf("The value of a is %f\n", a); // Result is 0.000000
    printf("The value of b is %d\n", b); // Result is 0
    printf("The value of b is %f\n", b); // Result is 3.000000 promoted
    printf("The value of x + y is %d\n", x + y);
    printf("The value of x - y is %d\n", x - y);
    printf("The value of x * y is %d\n", x * y);
    printf("The value of x / y is %d\n", x / y);
    printf("The value of z is %d\n", y * x);
    printf("The value of z is %d\n", z);
    printf("5 when divided by 2 leaves the remainder of %d\n", 5 % 2); //Numerator value is 5
    // Note : Sign of the remainder is always same as the numerator value.
    printf("-5 when divided by 2 leaves the remainder of %d\n", -5 % 2); //Numerator value is -5
    printf("5 when divided by -2 leaves the remainder of %d\n", 5 % -2); //Numerator is 5, denominator is -2
    printf("The value of 2 to the power 5 is %f\n", pow(2, 5)); // It written a real number, use %f
    printf("The value of 2 to the power 5 is %d\n", pow(2, 5)); // Because it return double, don't use %d
    printf("The value of 2 + 1 is %d\n", 2 + 1); // adding int + int gives an integer
    printf("The value of 2 + 1.5 is %f\n", 2 + 1.5); // adding int + float gives float
    printf("The value of 2 + 1.5 is %d\n", 2 + 1.5); // adding int + float gives 0
    printf("The value of 2.2 + 1.5 is %f\n", 2.2 + 1.5); // adding float + float gives float
    printf("The value of 5 / 2 is %d\n", 5 / 2); // divide int by int gives int
    printf("The value of 2 / 5 is %d\n", 2 / 5); // divide int by int gives int
    printf("The value of 3.0 / 9 is %f\n", 3.0 / 9); // divide float by int gives float
    printf("The value of 5.0 / 2 is %f\n", 5.0 / 2); // divide float by int gives float
    printf("The value of 2 / 5.0 is %f\n", 2 / 5.0); // divide int by float gives float
    printf("The value of a is %d\n", a); // a will store 3 and therfore 3.5 -> 3 (demoted to int)
    printf("The value of b is %f\n", b); // b will store 3.0 and therfore 3 -> 3.0 (promoted to float)
    return 0;
}