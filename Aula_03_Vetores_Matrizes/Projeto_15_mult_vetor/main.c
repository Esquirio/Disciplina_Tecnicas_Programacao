#include <stdio.h> // Funções de I/O, etc.
#define TAMANHO 8  // Define o tamanho do vetor
/* Funcão: main() */
int main(){
  int vetor_a[TAMANHO], vetor_b[TAMANHO];
  // Faz a leitura dos elementos do vetor
  for (int i = 0; i < TAMANHO; i++){
    printf("Digite o elemento %d do vetor: ", i);
    scanf("%d", &vetor_a[i]);
  }// Fim do for
  // Faz a multiplicacao e armaza em vetor_b
  for (int i = 0; i < TAMANHO; i++)
    vetor_b[i] = vetor_a[i]*3;

  // Imprime os vetores
  printf("Elementos do vetor A: ");
  for (int i = 0; i < TAMANHO; i++)
    printf("%d ", vetor_a[i]);
  printf("\n\nElementos do vetor B: ");
  for (int i = 0; i < TAMANHO; i++)
    printf("%d ", vetor_b[i]);
  return 0;
}// Fim da função main()

