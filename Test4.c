#include <stdio.h>

int main (void) {
	int a = f(5,10);
	printf("%d", a);
	return 0;
}

int f(int x, int y) {
	if(x+2<y) {
		x = x+3;
		return y*x;
	}
	else {
		return x+y+2;
	}
}
