#include <stdio.h>

void printArray(int *ptr, int n);
int main()
{
    int arr[] = {12, 45, 12, 50, 44, 88, 41};
    printArray(arr, 7);
    return 0;
}

void printArray(int *ptr, int n){
    int i;
    for (i = 0; i < n; i++)
    {
        printf("The value of element %d is %d\n", i + 1, *(ptr + i));
    }
    
}