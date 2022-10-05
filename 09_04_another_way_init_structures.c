#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[20];
};

int main(){
    struct employee mukul = {100, 34.23, "Mukul"};

    printf("Code is: %d \n", mukul.code);
    printf("Salary is: %f \n", mukul.salary);
    printf("Name is: %s \n", mukul.name);
 

    return 0;
}