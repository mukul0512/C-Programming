#include <stdio.h>

int main (void) {
	f(2,6);
	return 0;
}

int f(int x, int y) {
	while(x < y) {
		printf("%d ", y - x);
		x = x + 1;
		y = y - 1;
	}
}
