#include <stdio.h>

int main()
{
    // int a = 1; b = a; // Invalid
    int a = 1;
    int b = a;        // Valid
    int p = 2, q = p; // Valid
    int x = 3;        // Valid
    int y = x;        // Valid
    int v = 3 ^ 3;    // This is valid as it is a bitwise xor operator but not give the result 27
    int m = pow(3, 3);
    char dt = '21 Dec 20222'; // Invalid because it takes only one character
    char d = '5';             // Valid because it takes only one character
    double r = 3.0 / 8 - 2;
    float s = 3.0 / 8 - 2;
    int t = 3.0 / 8 - 2;
    // int num;
    int h = 2, i = 3, j = 3, k = 1, result;
    // Step by step evaluation of 3 * h / i - j + k
    result = 3 * h / i - j + k;
    // 3 * 2 / 3 - 3 + 1
    // 6 / 3 - 3 + 1
    // 2 - 3 + 1
    // -1 + 1 = 0
    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);
    printf("The value of p is %d\n", p);
    printf("The value of q is %d\n", q);
    printf("The value of x is %d\n", x);
    printf("The value of y is %d\n", y);
    printf("The value of 3 to the power 3 is %d\n", v);
    printf("The value of 3 to the power 3 is %d\n", m);
    printf("The value of dt is %c\n", dt);
    printf("The value of d is %c\n", d);
    printf("The value of r is %f\n", r);
    printf("The value of s is %f\n", s);
    printf("The value of t is %d\n", t);

    // Determine whether a number is divisible by 97 or not ?
    // printf("Enter the number here\n");
    // scanf("%d", &num);
    // printf("Divisibility test of 97 returns %d\n", num % 97);

    printf("The value of result is %d\n", result);
    return 0;
}