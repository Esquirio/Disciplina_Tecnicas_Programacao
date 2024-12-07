#include <stdio.h>
// Prototipo da funcao
void Muda_Vetor(int vetor_01[]);

// Funcao main()
int main() {
  int numeros[5] = {6, 6, 6, 6, 6};
  printf("Vetor antes:  ");
  for (int i = 0; i <= 4; i++) printf("%d  ", numeros[i]);

  printf("\n\nVetor depois: ");
  Muda_Vetor(numeros);

  for (int i = 0; i <= 4; i++) printf("%d  ", numeros[i]);

  return 0;
}  // Fim da funcao main()

// Funcao Muda_Vetor()
void Muda_Vetor(int vetor_01[]) {
  for (int i = 0; i <= 4; i++) vetor_01[i] = vetor_01[i] + 1;
}  // Fim da funcao Muda_Vetor()
