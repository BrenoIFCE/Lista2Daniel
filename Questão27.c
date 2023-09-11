#include <stdio.h>

int main() {
int numero, maior = 0, menor = 0;
int primeiro = 1;
puts("Digite números inteiros. Digite um número negativo e par para encerrar.");

while (1) {
printf("Digite um número: ");
scanf("%d", &numero);

if (numero < 0 && numero % 2 == 0) {
if (primeiro) {
printf("Nenhum valor inserido.");
} else {
int resultado = maior * menor;
printf("Produto do maior (%d) pelo menor (%d) número digitado: %d", maior, menor, resultado);
}
break;
}

if (primeiro) {
maior = numero;
menor = numero;
primeiro = 0;
} else {
if (numero > maior) {
maior = numero;
}
if (numero < menor) {
menor = numero;
}
}
}
return 0;
}
