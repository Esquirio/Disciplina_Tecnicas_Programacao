#include <stdio.h> // Funções de I/O, etc.
#define TAMANHO 10  // Define o tamanho do vetor
/* Funcão: main() */
int main(){
  int vetor_a[TAMANHO], vetor_b[TAMANHO];
  for (int i = 0; i < TAMANHO; i++){
    printf("Digite o elemento %d do vetor 01: ", i);
    scanf("%d", &vetor_a[i]);
  }// Fim do for

  for (int i = 0; i < TAMANHO; i++)
    vetor_b[i] = vetor_a[TAMANHO - i - 1];

  printf("\n\n***** Imprimindo Vetores *****\n");
  printf("Vetor a: ");
  for (int i = 0; i < TAMANHO; i++)
    printf("%d ", vetor_a[i]);
  printf("\n\nVetor b: ");
  for (int i = 0; i < TAMANHO; i++)
    printf("%d ", vetor_b[i]);
  printf("\n\n");
  return 0;
}// Fim da função main()

