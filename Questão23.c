#include <stdio.h>

int main() {
int numero = 7;
int resultadopre, resultadopos;
resultadopre = --numero;
numero = 7;
resultadopos = numero--;
printf("Resultado do pré-decremento: %d\n", resultadopre);
printf("Resultado do pós-decremento: %d\n", resultadopos);
return 0;
}
