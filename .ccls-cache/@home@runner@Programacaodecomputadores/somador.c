/**#include <stdio.h>
#include <string.h>
#include <math.h>

int __fpurge();
int val2ascii(int val);
int ascii2val(char val);

void fgets_modificada(char *str, int tam, FILE *origem)
{
  int i;
  __fpurge(stdin);
  fgets(str, tam, origem);
  __fpurge(stdin);
  for(i=0; str[i]!='\0'; i++) {
    if (str[i] == '\n') 
    {
      str[i] = '\0';
      break;
    }
  }
}

int base2dec(char *num, int base)
{
  int val = 0, i, expoente = 0;
  for(i = strlen(num) - 1; i>=0; i--) {
    val += ascii2val(num[i])*pow(base, expoente++);
  }
  return val;
}

void dec2base(int value, int base, char *num) 
{
  int i = 0;
  
  while(1) 
  {
    num[i++] = val2ascii(value%base);
    value = (value - (value%base))/base;

    if(value<base)
    {
      num[i++] = val2ascii(value);
      num[i] = '\0';
      break;
    }
  }
}

int val2ascii(int val)
{
  switch(val)
  {
    case 0: return '0';
    case 1: return '1';
    case 2: return '2';
    case 3: return '3';
    case 4: return '4';
    case 5: return '5';
    case 6: return '6';
    case 7: return '7';
    case 8: return '8';
    case 9: return '9';
    case 10: return 'A';
    case 11: return 'B';
    case 12: return 'C';
    case 13: return 'D';
    case 14: return 'E';
    case 15: return 'F';
  }
}

int ascii2val(char val)
{
  switch(val)
  {
    case '0': return 0;
    case '1': return 1;
    case '2': return 2;
    case '3': return 3;
    case '4': return 4;
    case '5': return 5;
    case '6': return 6;
    case '7': return 7;
    case '8': return 8;
    case '9': return 9;
    case 'A':
    case 'a': return 10;
    case 'B':
    case 'b': return 11;
    case 'C':
    case 'c': return 12;
    case 'D':
    case 'd': return 13;
    case 'E':
    case 'e': return 14;
    case 'F':
    case 'f': return 15;
  }
}

void soma(char *num1, int base1, char *num2, int base2, char *resultado, int base_resultado) 
{
  int n1, n2, soma;

  n1 = base2dec(num1, base1);
  n2 = base2dec(num2, base2);

  soma = n1 + n2;

  dec2base(soma, base_resultado, resultado); 
}

int main() {
  char num1[20], num2[20], resultado[20];
  int base1, base2, base_resultado;

  printf("num1:\n");
  fgets_modificada(num1, 20, stdin);
  printf("base1:\n");
  scanf("%d", &base1);
  
  printf("num2:\n");
  fgets_modificada(num2, 20, stdin);
  printf("base2:\n");
  scanf("%d", &base2);
  
  printf("base resultado:\n");
  scanf("%d", &base_resultado);

  soma(num1, base1, num2, base2,resultado, base_resultado);
  printf("--------------------------\n");
  printf("RESULTADO DA SOMA:\n");
  printf("%s\n", resultado);
  scanf("na base %d\n", &base_resultado);
}**/