/**#include <stdio.h>

void strcmp(char *string, char *string1) {
  while(*string) {
    if(*string != *string1) {
      printf("Strings diferentes\n");
      return;
    }
    string++;
    string1++;
  }
  printf("Strings iguais\n");
  return;
}

int main() {
  char str[100], str1[100];
  printf("Informe a string:");
  gets(str);
  printf("\nInforme a string:\n");
  gets(str1);
  strcmp(str1, str);
  return 0;
}
**/