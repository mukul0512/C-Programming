#include <stdio.h>

int main()
{
    int physics, chemistry, mathematics;
    float total;
    printf("Enter your physics marks here\n");
    scanf("%d", &physics);
    printf("Enter your chemistry marks here\n");
    scanf("%d", &chemistry);
    printf("Enter your mathematics marks here\n");
    scanf("%d", &mathematics);
    total = (physics + chemistry + mathematics) / 3;
    if ((total < 40) || physics < 33 || chemistry < 33 || mathematics < 33)
    {
        printf("Your total percentage is %f and you are fail\n", total);
    }
    else
    {
        printf("Your total percentage is %f and you are pass\n", total);
    }

    return 0;
}