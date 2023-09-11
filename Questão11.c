#include <stdio.h>

int main(void) {
  int a, b = 0;
  int numero;
  puts("Defina a faixa A:");
  scanf("%d", &a);
  puts("Defina a faixa B:");
  scanf("%d", &b);

  if(b > a){
  for(numero = a;numero < b;numero++){
    if(numero % 4 == 0) printf("%d\n", numero);
  }
  } else if(a > b){
  for(numero = b;numero < a;numero++){
    if(numero % 4 == 0) printf("%d\n", numero);
  }
  }
  return 0;
}
