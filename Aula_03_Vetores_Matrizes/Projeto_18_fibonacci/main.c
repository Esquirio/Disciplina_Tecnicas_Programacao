#include <stdio.h>   // Funções de I/O, etc.
#define TAMANHO 100  // Define o tamanho do vetor
/* Funcão: main() */
int main()
{
  double vetor[100];
  int size = 0, controle = 0;
  vetor[0] = 1; // Primeiro elemento da sequencia de fibo
  vetor[1] = 1; // Segundo elemento da sequencia de fibo

  do{
    printf("***** Sequencia de Fibonacci *****\n\n");
    printf("Entre 1 a 100,\n");
    printf("Quantos numeros deseja imprimir? ");
    scanf("%d", &size);
    if (size > 0 && size <= TAMANHO)
      controle=1;
    printf("\n\n");
  }while(controle==0);

  // Calcula sequencia
  for(int i = 2; i <= size-1; i++)
    vetor[i] = vetor[i-1] + vetor[i-2];

  printf("Sequencia de Fibonacci: ");
  for(int i = 0; i <= size-1; i++){
    printf("%.0f", vetor[i]);
    if (i != (size-1))
      printf(", ");
  }// Fim do for
  printf("\n\n");

  return 0;
}// Fim da funcao main()
