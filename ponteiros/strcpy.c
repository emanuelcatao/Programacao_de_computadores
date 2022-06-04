/**#include <stdio.h>

int strcpy(char *destino, char *origem) {
  while(*origem) {
    *destino = *origem;
    origem++;
    destino++;
  }
  *destino=*"\0";
}

int main() {
  char str[100]="Colé que é mermaõ?", str1[100];
  printf("Informe a string:\n");
  gets(str);
  strcpy(str1, str);
  printf("A string copiada é: %s\n", str1);
  return 0;
}
**/