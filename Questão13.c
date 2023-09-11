#include <stdio.h>

int main(void) {

  int a, b, soma = 0;
  int i;
  puts("Defina a faixa A:");
  scanf("%d", &a);
  puts("Defina a faixa B:");
  scanf("%d", &b);
  printf("\n");
  if(b > a){
  for(i = a;i < b;i++){
    if(i % 2 == 0) {
      soma = soma + i;
      
    }
  }
  } else if(a > b){
  for(i = b;i < a;i++){
    if(i % 2 == 0) {
      soma = soma + i;
     
    }
  }
  }
  printf("Soma dos pares: %d", soma);
  return 0;
}
