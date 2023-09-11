#include <stdio.h>

int main() {
unsigned char X, Y;

puts("Digite o valor de X (0 a 255):");
scanf("%hhu", &X);

puts("Digite o valor de Y (5 a 251):");
scanf("%hhu", &Y);

if (Y < 5 || Y > 251) {
printf("Y deve ser maior ou igual a 5 e menor ou igual a 251.");
return 1; 
}

for (int i = Y - 4; i < Y; i++) {
X = X | (1 << i);
}

for (int i = Y + 1; i <= Y + 4; i++) {
X = X | (1 << i);
}

printf("O valor de X após a operação é: %u", X);
return 0;
}
