#include <stdio.h>
#include <stdlib.h>

int main() {
  int i;
  int *p = malloc(5*sizeof(int));
  for(i = 0; i<5; i++) {
    p[i] = i+1;    
  }
  printf("\n");

  for(i = 0; i<5; i++) {
    printf("%d\n", p[i]);  
  }
  printf("\n");

  p = realloc(p, 3*sizeof(int));
  for(i = 0; i<3; i++) {
    printf("%d\n", p[i]);  
  }
  printf("\n");
  
  p = realloc(p, 10*sizeof(int));
  for(i = 0; i<10; i++) {
    printf("%d\n", p[i]);  
  }
}