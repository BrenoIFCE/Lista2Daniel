#include <stdio.h>

int main(void) {
float a, b = 0;
 puts("Insira um dividendo:");
 scanf("%f", &a);
 do{
  puts("Insira um divisor:");
  scanf("%f", &b);
  if(b == 0) puts("O divisor não pode ser nulo!\n");
  } while(b == 0);
printf("O resultado da divisão é %.2f", a / b);
}
