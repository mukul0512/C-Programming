#include <stdio.h>
int element(int n);

int main()
{
    int n;
    printf("The nth element is %d\n", element(n));
    return 0;
}

int element(int n){
    // fib(n) = fib(n - 1) + fib(n - 2) 
    // fib(1) = 0
    // fib(2) = 1
    int result = fib(n - 1) + fib(n - 2); 
    return result;
}