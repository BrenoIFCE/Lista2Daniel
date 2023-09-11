#include <stdio.h>
#include <math.h>

int main(void) {
double base = 3;
  for(int potencia = 0;potencia < 8;potencia++){
    int resultado = pow(base, potencia);
    printf("3^%d: %d\n", potencia, resultado);
  }
  return 0;
}
