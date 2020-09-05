#include <stdio.h> // Fun��es de I/O, etc.
#define TAMANHO 5  // Define o tamanho do vetor
/* Func�o: main() */
int main(){
  int vetor_01[TAMANHO], vetor_02[TAMANHO];
  int prod_escalar = 0;
  for (int i = 0; i < TAMANHO; i++){
    printf("Digite o elemento %d do vetor 01: ", i);
    scanf("%d", &vetor_01[i]);
  }// Fim do for
  for (int i = 0; i < TAMANHO; i++){
    printf("Digite o elemento %d do vetor 02: ", i);
    scanf("%d", &vetor_02[i]);
  }// Fim do for

  // Calcula o produto escalar
  for(int i = 0;i < TAMANHO; i++){
    prod_escalar += vetor_01[i]*vetor_02[i];
  }// Fim do for
  printf("\n\nProduto escalar: %d\n\n", prod_escalar);
  return 0;
}// Fim da fun��o main()

