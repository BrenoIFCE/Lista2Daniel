#include <stdio.h>

int main(void) {
  int celsius;
  float fahrenheit;  
 

  for (celsius = 1; celsius < 101; celsius++){
  fahrenheit = (celsius * 1.8) + 32;
  if(celsius % 10 == 0) printf("Celsius: %d, Fahrenheit: %.1f\n", celsius, fahrenheit);
  }
  return 0;
}
