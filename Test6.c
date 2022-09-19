#include <stdio.h>

int main (void) {
	f(3,8);
	return 0;
}

int f(int a, int b) {
	while(a < b) {
		printf("a=%d, b=%d\n", a, b);
		if(a % 2 == 0) {
			int i;
			for(i=a; i<b; i++) {
				printf("i=%d\n", i);
			}
		}
		a++;
		b--;
	}
}
