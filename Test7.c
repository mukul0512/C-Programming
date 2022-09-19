#include <stdio.h>

int main (void) {
int a = f(7);
printf("%d", a);
	return 0;
}

int f (int n) {
  int ans = 0;
  int i;
  for (i = 1; i < n; i++) {
    if (i < n/2) {
      ans -= i;
    }
    else {
      ans += i;
    }
  }
  return ans;
}
