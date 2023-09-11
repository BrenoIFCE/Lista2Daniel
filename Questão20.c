#include <stdio.h>


int fat(int n){
int fatorial = 1;
for (int i = 1; i <= n; i++){
fatorial *= i;
}
return fatorial;
}
int main(void) {
for(int i = 0; i < 10; i++){
if(i % 2 == 0) {
int resultado = i + 1;
int fatorial = fat(resultado);
printf("Fatorial de %d = %d\n", resultado, fatorial);
}
}
}
