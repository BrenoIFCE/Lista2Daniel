#include <stdio.h>

int main(void) {
  puts("|***************************|");
  puts("|***BEM-VINDO AS ELEIÇÕES***|");
  puts("|***************************|\n");
  puts("Candidatos:\n5 - Paulo\n7 - Renata\n0 - *VOTO BRANCO*\n");
  int voto = 0;
  char confirmar = 0;
  do{
  puts("Insira o seu voto:");
  scanf("%d", &voto);
  if(voto < 0) break;
  if(voto != 5 && voto != 7 && voto != 0) puts("Você votou nulo.\n");
   
  puts("Deseja confirmar seu voto? (Digite 's' para sim ou 'n' para não.)");
  scanf(" %c", &confirmar);

  puts("|************************|");
  puts("|***RELATÓRIO DE VOTOS***|");
  puts("|************************|");

  if(voto == 5) puts("Paulo - 100% de votos\nRenata - 0% de votos\nVOTO BRANCO - 0% de votos\n");
  if(voto == 7) puts("Paulo - 0% de votos\nRenata - 100% de votos\nVOTO BRANCO - 0% de votos\n");
  if(voto == 0) puts("Paulo - 0% de votos\nRenata - 0% de votos\nVOTO BRANCO - 100% de votos\n");
  if(voto != 5 && voto != 7 && voto != 0) puts("Paulo - 0% de votos\nRenata - 0% de votos\nVOTO BRANCO - 0% de votos\n");
    
  } while(confirmar == 'n');
  return 0;
}
