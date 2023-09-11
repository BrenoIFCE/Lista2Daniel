#include <stdio.h>

int main() {
int n;
double pi = 0.0;
int sinal = 1;

for (n = 1; n <= 200; n++) { 
double termo = 4.0 / (2 * n - 1);
pi += sinal * termo;
sinal = -sinal;

if (n % 10 == 0) { 
printf("%d = %.10f\n", n, pi);
}
}
return 0;
}
