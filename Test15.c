#include <stdio.h>

int main(void)
{
	int x = 5;
    double d1 = 11/x;
    double d2 = 11/(double)x;
    printf("%d", d1, d2);
}
