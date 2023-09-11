#include <stdio.h>

int main(void) {
 int n, maior;
 int k = 0;
  do{
  puts("Digite um número: ");
  scanf("%d", &n);
  if(!k++) maior = n;
  if(n > maior) maior = n;
  if(n) printf("O maior número é %d\n", maior);

  }while(n!=0);
  puts("Fim.");
  return 0;
}
