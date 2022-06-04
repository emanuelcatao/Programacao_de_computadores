/**#include <stdio.h>

//verificação de igualdadade esta errada
int verifica_linhas(char tabuleiro[3][3]) {
  int i = 0;
  if(tabuleiro[0][0] == tabuleiro[0][1] && tabuleiro[0][1] == tabuleiro[0][2]) i = 1;
  else if(tabuleiro[1][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[1][2]) i = 1;
  else if(tabuleiro[2][0] == tabuleiro[2][1] && tabuleiro[2][1] == tabuleiro[2][2]) i = 1;

  return i;
}

int verifica_colunas(char tabuleiro[3][3]) {
  int i = 0;
  if(tabuleiro[0][0] == tabuleiro[1][0] && tabuleiro[1][0] == tabuleiro[2][0]) i = 1;
  else if(tabuleiro[0][1] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][1]) i = 1;
  else if(tabuleiro[2][2] == tabuleiro[1][2] && tabuleiro[1][2] == tabuleiro[0][2]) i = 1;

  return i;
}

int verifica_diagonais(char tabuleiro[3][3]) {
  int i = 0;
  if(tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][2]) i = 1;
  else if(tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][0]) i = 1;

  return i;
}

void jogada(char matriz[3][3], int linha, int coluna, char simbol) {
  int i, j;

  if(matriz[linha][coluna] == ' ') {
    matriz[linha][coluna] = simbol;
  }
  else {
    while(1) {
      printf("Posicao invalida, informa nova posicao:\n");
      scanf("%d%d", &i, &j);
      if(matriz[linha][coluna] == ' ') {
        matriz[linha][coluna] = simbol;
        return;
      }
    }  
  }
  return;
}

void inicializa_matriz(char mat[3][3]) {
  int i, j;
  for(int i = 0; i<3; i++) {
    for(int j = 0; j<3; j++) {
      mat[i][j] = ' ';
    }
  }
  return;
}

void tabuleiro(char mat[3][3]) {
  int i, x=0;
  system("clear");
  printf("  0  1  2  ");
  while(x < 3) {
    i = 0;
    printf("\n%d ", x);
    while(i < 3) {
      if(i == 1) {
        printf("| %c |", mat[x][i]);
      }
      else {
        printf("| %c |", mat[x][i]);
      }
      i++;
    }
    if(x<2) printf("----------------------");
    x++;
  }
}

int main() {
  char mat[3][3];
  int i, j, cont, flag1=0, flag2=0, flag3=0, v = 0;
  cont = 0;
  inicializa_matriz(mat);

  while (cont < 9 && flag1 == 0 && flag2 == 0 && flag3 == 0) {
    printf("Jogador 1 (X) informe L e C\n");
    scanf("%d%d", &i, &j);
    jogada(mat, i, j, 'X');
    cont++;
    flag1 = verifica_linhas(mat);
    flag2 = verifica_colunas(mat);
    flag3 = verifica_diagonais(mat);
    if(cont < 9 && flag1 == 0 && flag2 == 0 && flag3 == 0) {
      printf("Jogador 2 (0) informe L e C\n");
      scanf("%d%d", &i, &j);
      jogada(mat, i, j, '0');
      cont++;
      flag1 = verifica_linhas(mat);
      flag2 = verifica_colunas(mat);
      flag3 = verifica_diagonais(mat);
    }
    else {
      printf("Jogador 1 é o vencedor!\n");
      v = 1;
    }
  }

  if(flag1 == 0 && flag2 == 0 && flag3 == 0) {
    printf("Velha!\n");
  }
  else {printf("Jogador 2 é o vencedor!\n");}

  return 0;
}**/