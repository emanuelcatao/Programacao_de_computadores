/**#include <stdio.h>

int simetrica(int l, int c, int matriz[l][c]) {
  int i, j;

  for(i = 0; i<l; i++) {
    for(j = 0; j<c; j++) {
      if(matriz[i][j] != matriz[j][i]) return 0;
    }
  }
  return 1;
};

int main() {
  int matriz[2][2], i, j, res;
  printf("Valores da matriz:");
  for(i = 0; i<2; i++) {
    for(j = 0; j<2; j++) {
      scanf("%d", &matriz[i][j]);
    }
  }

  res = simetrica(matriz, i, j);

  if(res==0) printf("A matriz não é simétrica\n");
  else if(res==1) printf("A matriz é simétrica\n");
  return 0;
  
}**/