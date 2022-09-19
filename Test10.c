#include <stdio.h>

int main(void) {
  int a = f(10);
  printf("%d\n", a);
  return 0;
}

int f (int x) { 
  int answer = 0;
  int i;        
  for (i = 0; i < x; i++) {  
    answer += i * i;             
  }                              
  return answer;
}
