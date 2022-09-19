#include <stdio.h>

int f(int x, int y){
	if(x<y){
		printf("x<y\n");
		return y+x;
	}
	else{
		printf("x>=y\n");
		if(x>5){
			return y+7;
		}
	}
	return x-2;
}
int main (void) {
	int a = f(3,4);
	int b = f(a,5);
	return 0;
}
