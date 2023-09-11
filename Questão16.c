#include <stdio.h>

int main(void) {

  int i, soma3 = 0, soma5 = 0;
  for (i = 0; i <= 200; i++) {
  if (i <= 100 && i % 3 == 0) soma3 += i; 
  if (i >= 100 && i % 5 == 0) soma5 += i;
  }
  printf("A soma dos divisíveis por 3 é %d\n", soma3);
  printf("A soma dos divisíveis por 5 é %d\n", soma5);
}
