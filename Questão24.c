#include <stdio.h>

int main() {
int limite = 500;
int a, b, c;
int triplas = 0;
puts("Triplas de pitágoras:");
for (a = 1; a <= limite; a++) {

for (b = a; b <= limite; b++) {
int hipotenusa = a * a + b * b;
c = 1;

while (c * c < hipotenusa) {
c++;
}

if (c * c == hipotenusa && c <= limite) {
printf("(%d, %d, %d)\n", a, b, c);
triplas++;
}

}
}
printf("Total de triplas: %d", triplas);
return 0;
}
