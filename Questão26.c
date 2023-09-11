#include <stdio.h>

int main() {
for (int decimal = 1; decimal <= 256; decimal++) {
printf("Decimal: %d\t\t", decimal);

for (int i = 7; i >= 0; i--) {
int bit = (decimal >> i) & 1;
printf("%d", bit); //binario
}
        
printf("\t\t");
printf("Octal: %o\t\t", decimal); //octal
printf("Hexadecimal: %X\n", decimal); //hexadecimal
}
return 0;
}
