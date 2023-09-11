#include <stdio.h>

int main(void) {
  int pedro = 110;
  int jose = 150;
  int ano = 0;
 
  while(jose >= pedro){
    jose += 2;
    pedro += 3;
    ano++;
  }
  printf("Será necessário %d anos para Pedro ficar maior que José.", ano);
  return 0;
} 
