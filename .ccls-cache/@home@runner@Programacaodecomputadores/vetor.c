/**#include <stdio.h>

int vet(int *v, int tamanho, int valor) {
  int apareceu = 0;
  for(int i = 0; i< tamanho; i++) {
    if(v[i] == valor) apareceu++;
  }
  return apareceu;
}

int main() {
  int vetor[5], tamanho, valor;
  printf("Valores do vetor:\n");
  for(int i = 0; i<5; i++) {
    scanf("%d", &vetor[i]);
  }
  printf("Valor a ser procurado:\n");
  scanf("%d", &valor);
  printf("O valor %d apareceu %d vezes\n", valor, vet(vetor, 5, valor));
}**/