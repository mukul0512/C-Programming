#include <stdio.h>

int main()
{
    int age;
    int vipPass = 1;
    printf("Enter your age here\n");
    scanf("%d", &age);
    if (age >= 90 || age <= 18)
    {
        printf("You are above 90 or below 18 so can't drive\n");
    }
    else
    {
        printf("You can drive\n");
    }
    if (age <= 90 && age >= 18){
        printf("You are above 18 and below 90 so you can drive\n");
    }
    else
    {
        printf("You can't drive\n");
    }
    if ((age <= 90 && age >= 18) || vipPass == 1){
        printf("You are above 18 and below 90 or you have a vipPass so you can drive\n");
    }
    else
    {
        printf("You can't drive\n");
    }
    if ((age <= 90 && age >= 18) || !(vipPass == 1)){
        printf("You are above 18 and below 90 or you have not any vipPass so you can drive\n");
    }
    else
    {
        printf("You can't drive\n");
    }
    return 0;
}