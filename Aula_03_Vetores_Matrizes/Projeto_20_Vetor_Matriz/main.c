#include <stdio.h>   // Funções de I/O, etc.
#define TAM  12      // Tamanho vetor/Matriz
/* Funcão: main() */
int main()
{
  int vetor_1[TAM], vetor_2[TAM], matriz[TAM][2];
  printf("Digite o vetor 1:\n");
  for(int i=0; i<TAM; i++){
    printf("Elemento[%d]: ", i);
    scanf("%d", &vetor_1[i]);
  }// Fim do for(int i=0; i<TAM; i++)
  printf("Digite o vetor 2:\n");
  for(int i=0; i<TAM; i++){
    printf("Elemento[%d]: ", i);
    scanf("%d", &vetor_2[i]);
  }// Fim do for(int i=0; i<TAM; i++)
  // Calculando Matriz
  for(int i=0; i<TAM; i++){
    matriz[i][0] = vetor_1[i]*2;
    matriz[i][1] = vetor_1[i]-5;
  }// Fim do for(int i=0; i<TAM; i++)
  //Imprimindo resultado
  printf("\n\nElementos do vetor 1:\n");
  for(int i=0; i<TAM; i++)
    printf("%d ", vetor_1[i]);
  printf("\n\nElementos do vetor 2:\n");
  for(int i=0; i<TAM; i++)
    printf("%d ", vetor_2[i]);

  printf("\n\nElementos da matriz:\n");
  for(int i=0; i<TAM; i++){
    printf("%d ", matriz[i][0]);
    printf("%d\n", matriz[i][1]);
  }// Fim do for(int i=0; i<TAM; i++)
  return 0;
}// Fim da função main()

