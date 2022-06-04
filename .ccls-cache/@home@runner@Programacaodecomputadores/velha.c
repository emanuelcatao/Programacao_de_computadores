/**#include <stdio.h>

int verifica_posicoes(char *tabuleiro) {
  int i = 0;
  if(tabuleiro[0][0] == tabuleiro[0][1] && tabuleiro[0][1] == tabuleiro[0][2]) i = 1;
  else if(tabuleiro[1][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[1][2]) i = 1;
  else if(tabuleiro[2][0] == tabuleiro[2][1] && tabuleiro[2][1] == tabuleiro[2][2]) i = 1;
  else if(tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][2]) i = 1;
  else if(tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][0]) i = 1;

  return i;
}

int jogar(char *tabuleiro[3][3]) {
  char j1 = 'X';
  char j2 = 'O';
  int i = 0, j = 0;

  for(i=0; i<6; i++) {
    int v = 0;

    v = verifica_posicoes(*tabuleiro);
  }  
}


int main() {
  char * tabuleiro[3][3] = {"-","+","-","+","-","+","+","-","+"};
  
  for(int i = 0; i<3; i++) {
    printf(" | ");
    for(int j = 0; j<3; j++) {
      printf("%c", *tabuleiro[i][j]);
      printf(" | ");
    }
    printf("\n");
  }

  while(jogar(*tabuleiro)) {
    for(int i = 0; i<3; i++) {
    printf(" | ");
    for(int j = 0; j<3; j++) {
      printf("%c", *tabuleiro[i][j]);
      printf(" | ");
    }
    printf("\n");
  }
  };
}**/