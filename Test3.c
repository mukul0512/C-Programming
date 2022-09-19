#include <stdio.h>

int main (void) {
	int a = g(3,0);
	printf("%d", a);
	return 0;
}

int g(int x, int y) {
    switch (x - y) {
	    case 0:
		    return x;
		    break;
	    case 4:
			y = y + 1;
			break;
		case 7:
			x = x -1;
		case 9:
			return x * y;
		case 3:
			y = x + 9;
		default:
			return y - x;
	}
	
    return y;
}
