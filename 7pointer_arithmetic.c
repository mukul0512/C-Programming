#include <stdio.h>

int main()
{
    // int i = 34;
    // int *ptr = &i;
    // printf("The address of ptr is %u\n", ptr);
    // ptr++; // + 4 = 4 We can also write ptr = ptr + 1
    // printf("The address of ptr after first time post increment is %u\n", ptr); // This pc have 4 bytes of integer pointer
    // ptr++; // + 4 * 2 = 8
    // printf("The address of ptr after second time post increment is %u\n", ptr);
    // ptr++; // + 4 * 3 = 12
    // printf("The address of ptr after Third time post increment is %u\n", ptr);

    // char c = 'K';
    // char *ptr = &c;
    // printf("The address of ptr is %u\n", ptr);
    // ptr = ptr + 1; // character pointers have only 1 byte in this pc. So only 1 ka hi increment hua
    // printf("The address of ptr is %u\n", ptr);

    float m = 5.20;
    float *ptr = &m;
    printf("The address of ptr is %u\n", ptr);
    ptr = ptr + 1; // float pointers also have 4 byte in this pc. So 4 ka increment hua
    printf("The address of ptr is %u\n", ptr);
    return 0;
}