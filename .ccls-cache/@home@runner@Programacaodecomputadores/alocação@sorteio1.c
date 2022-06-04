#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sorteia_valores(int *sorteio, int n) 
{
  int i;
  //inicializa o gerador de numeros aleatorios alterando a semente a cada execução
  srand(time(NULL));
  for(i = 0; i<n; i++) sorteio[i] = rand()%100;
}

void sort_valores(int *sorteio, int n) 
{
  int i;
  //inicializa o gerador de numeros aleatorios alterando a semente a cada execução
  srand(time(NULL));
  for(i = 0; i<n; i++) 
    if(sorteio[i] == -1){
      srand(time(NULL));
      sorteio[i] = rand()%100;
    }
}

void ler_aposta(int* aposta, int n_apostas) 
{
  int i, j, valor, apostou;

  printf("Informe os %d valores apostados (0-100): ", n_apostas);
  
  for(i = 0; i < n_apostas; i++) {
    while(1) {
      scanf("%d", &valor);
      apostou = 0;
      for(j = 0; j <= i; j++) if (valor == aposta[j]) apostou = 1;

      if(apostou == 0) break;
    }
    aposta[i] = valor;
  }
}

int verifica_sorteio(int *sorteio) {
  int i, j, confere = 1;
  for(i = 0; i<20; i++) {
    for(j = i+1; j < 20; j++) {
      if(sorteio[i] == sorteio[j]) {
        sorteio[i] = -1;
        confere = 0;
      }
    }
  }

  return confere;
}

int compara_apostas(int * aposta, int * sorteio, int * val_certos, int na, int ns)
{
  int i, j, n = 0;

  for(i = 0; i<na; i++) 
  {
    for(j = 0; j<ns; j++) 
    {
      if(aposta[i] == sorteio[j]) 
      {
        if (n == 0) 
        {
          val_certos[n] = aposta[i];
          n++;
        } else {
          val_certos = realloc(val_certos, (n + 1)*sizeof(int));
          val_certos[n] = aposta[i];
          n++;
        }
      }
    }
  }
  return n;
}

int main() 
{
  int n_apostas, i, qtd_acertos, *aposta, *val_certos, sorteio[20];
  int verif_sorteio;

  while(1) {
    printf("Informe o numero de valores apostados: \n");
    scanf("%d", &n_apostas);

    if(n_apostas < 1 || n_apostas > 20)
      printf("Quantidade inválida de apostas!!!\n");
    else break;
  }
  
  aposta = (int *) malloc(n_apostas*sizeof(int));
  val_certos = (int *) malloc(1*sizeof(int));

  ler_aposta(aposta, n_apostas);
  sorteia_valores(sorteio, 20);
  while(1) {
    printf("---");
    verif_sorteio = verifica_sorteio(sorteio);
    if(verif_sorteio) break;
    else sorteia_valores(sorteio, 20);
    printf("...");
  }
  qtd_acertos = compara_apostas(aposta, sorteio, val_certos, n_apostas, 20);

  printf("valores sorteados \n");
  for(i = 0; i < 20; i++)
    printf("%d\n", sorteio[i]);

  printf("valores apostados \n");
  for(i = 0; i < n_apostas; i++)
    printf("%d\n", aposta[i]);

  printf("----Valores acertados---- \n");
  if(qtd_acertos == 0) {
    printf("ERROU TUDOOOO! Perde dinheiro mesmo, seu trouxa!\n");
  }
  else {
    printf("Acertaste %d numeros, nojento\n", qtd_acertos);
    for(i = 0; i < qtd_acertos; i++)
      printf("%d\n", val_certos[i]);
  }

  free(aposta);
  free(val_certos);

  return 0;
}