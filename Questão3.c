#include <stdio.h>

int main(void) {
  int numero = 0;
  puts("Insira um número:");
  scanf("%d", &numero);

  int fatorial = 0;
  for(fatorial = 1; numero > 1; numero = numero - 1)
  {      
      fatorial = fatorial * numero;
  }
  printf("O fatorial desse número é %d", fatorial);
  return 0;
}
