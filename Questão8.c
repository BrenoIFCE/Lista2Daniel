#include <stdio.h>

int main(void) {

  float mercadoria, entrada = 0;
  int prestacao1, prestacao2 = 0;
  puts("Insira o valor da mercadoria:");
  scanf("%f", &mercadoria);
  prestacao1 = mercadoria / 3;
  prestacao2 = prestacao1;
  entrada = mercadoria - (prestacao1 + prestacao2);

  printf("Entrada: %.2f\nPrimeira prestação: %d\nSegunda prestação: %d", entrada, prestacao1, prestacao2);
  return 0;
}
