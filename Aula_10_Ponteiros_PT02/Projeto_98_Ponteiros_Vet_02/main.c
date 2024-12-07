#include <stdio.h>
// Funcao main() 
int main() {
  int *ptrVetor;
  int vetor[] = {1, 2, 3, 4, 5};
  // Apronta o ponteiro para o vetor
  ptrVetor = vetor;
  for (int i = 0; i < 5; i++) {
    // Imprime incrementando pont
    printf("%d\t", *(ptrVetor + i));
  }  // Fim da funcao main()
  return 0;
}  // Fim da funcao main()
