#include <stdio.h>

int main(void) {

  char dia = 0;
  while (1) {
    puts("Insira um dia da semana (entre 1 a 7):");
    scanf(" %c", &dia);
  switch (dia){
    case '1':
    puts("Domingo.");
    break;
  
    case '2':
    puts("Segunda.");
    break;
    
    case '3':
    puts("Terça.");
    break;
    
    case '4':
    puts("Quarta.");
    break;
    
    case '5':
    puts("Quinta.");
    break;
    
    case '6':
    puts("Sexta.");
    break;
    
    case '7':
    puts("Sábado.");
    break;
    
    case '0':
    puts("Fim.");
    return 0;
    
    default:
    puts("Número do dia não válido");
  }
}
  return 0;
}
