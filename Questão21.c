#include <stdio.h>

int main(void) {

int valor, original, reverso = 0, digito;
puts("Insira um valor de 5 digitos:");
scanf("%d", &valor);
original = valor;

while (valor > 0) {
digito = valor % 10;
reverso = reverso * 10 + digito;
valor = valor / 10;
}

if (original == reverso) {
printf("O número %d é um palíndromo.\n", original);
} else {
printf("O número %d não é um palíndromo.\n", original);
}
return 0;
}
