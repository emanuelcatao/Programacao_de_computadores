/**#include <stdio.h>

void modulo(int *vetor) {
  while(*vetor) {
    if(*vetor < 0) {
      *vetor = *vetor * -1;
      vetor++;
    } else vetor++;
  }
  return;
}

int main() {
  int vetor[6] = {-1, 2, -3, 4,-5};
  modulo(vetor);

  for(int i = 0; i<5; i++) {
    printf("%d\n", vetor[i]);
  }
}**/