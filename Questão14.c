#include <stdio.h>

int main(void) {

  int a, b, soma = 0;
  int i;
  int contagem = 0;
  puts("Defina a faixa A:");
  scanf("%d", &a);
  puts("Defina a faixa B:");
  scanf("%d", &b);
  printf("\n");
  if(b > a){
  for(i = a;i < b;i++){
    if(i%3==0) printf("%d\n", i); contagem++;

  }
  } else if(a > b){
   for(i = b;i < a;i++){
   if(i%3==0) printf("%d\n", i); contagem++;
   
  }
}
  printf("Existem %d números divisíveis por 3", contagem / 3);
  return 0;
}
