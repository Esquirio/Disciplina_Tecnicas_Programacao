#include <stdio.h>
#include <stdlib.h>
int main() {
  // ponteiro para um vetor
  int *pVetor;
  int i;
  // criando um vetor de 10 elementos
  pVetor = (int *)malloc(10 * sizeof(int));
  // preenchendo o vetor
  for (i = 0; i < 10; i++) {
    printf("\nDigite o valor da posicao %d do vetor:", i);
    scanf("%d", (pVetor + i));
  }
  printf("\n----------------------------------------");
  printf("\nEndereco do ponteiro antes da realocacao");
  printf(" -->endereco pVetor = %u", pVetor);
  // aumento o vetor em 5 elementos
  pVetor = (int *)realloc(pVetor, 15 * sizeof(int));
  printf("\nEndereco do ponteiro apos aa realocacao");
  printf(" -->endereco pVetor = %u", pVetor);
  printf("\n----------------------------------------");
  // preenchendo as posicoes de 10 a 14
  for (i = 10; i < 15; i++) {
    printf("\nDigite o valor da posicao %d do vetor:", i);
    scanf("%d", (pVetor + i));
  }
  // imprimindo todo o vetor
  // preenchendo o vetor
  for (i = 0; i < 15; i++) {
    printf("\n pVetor[%d] = %d", i, *(pVetor + i));
  }
  return 0;
}  // Fim da Função main()
