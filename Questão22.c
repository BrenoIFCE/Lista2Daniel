#include <stdio.h>

int main() {
int numero, digito, contagem = 0;
puts("Digite um número inteiro:");
scanf("%d", &numero);

while (numero != 0) {
digito = numero % 10;
if (digito == 7) {
contagem++;
}
numero = numero / 10;
}
printf("Existem %d números 7.", contagem);
return 0;
}
