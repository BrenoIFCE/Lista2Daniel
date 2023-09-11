#include <stdio.h>

int main(void) {

int a, b, i, contagem = 0;
float soma = 0;
puts("Defina a faixa A:");
scanf("%d", &a);
puts("Defina a faixa B:");
scanf("%d", &b);

if(b > a){ 
for(i = a; i < b; i++){
contagem++;
soma += i;
}
} else if(a > b){ 
for(i = b; i < a; i++){
contagem++;
soma += i;
}
}
if (contagem > 0) {
float media = soma / contagem; 
printf("Média aritmética: %.2f", media);
}
return 0;
}
