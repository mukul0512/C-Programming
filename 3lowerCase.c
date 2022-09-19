#include <stdio.h>

int main()
{
    char character;
    printf("Enter the character\n");
    scanf("%c", &character);
    if (character <= 122 && character >=97) // 97 - 122 are ASCII values for a - z
    {
        printf("It is a lowercase character\n");
    }
    else
    {
        printf("It is not lowercase character\n");
    }
    
    return 0;
}