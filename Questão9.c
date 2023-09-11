#include <stdio.h>

int main(void) {
 int termo1 = 0, termo2 = 1, proxtermo = 0;
 

  for(int i = 0; i < 20; i++){
    if(i<=1){
      proxtermo = i;
    } else{
      proxtermo = termo1 + termo2;
      termo1 = termo2;
      termo2 = proxtermo;
    }
    printf("%d\n", proxtermo);
  }
  return 0;
}
