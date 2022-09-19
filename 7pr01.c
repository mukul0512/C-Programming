#include <stdio.h>

int main()
{
    int arr[10];
    // int *ptr = &arr[0];
    int *ptr = arr; // Above and this gives the same result
    return 0;
}