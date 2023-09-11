#include <stdio.h>

int main(void) {

  int i;
  for(i = 15;i < 91;i++){
    if(i % 4 == 0){
    printf("%d\n", i * i);
    }
  }
}
