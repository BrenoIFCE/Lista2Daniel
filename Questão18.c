#include <stdio.h>

int main(void) {
  double trigo = 1;
  for (int i = 0; i < 65; i++){
  trigo = trigo * 2;
  printf("Total de trigos: %.0f\n", trigo - 1);
  }
  return 0;
}
