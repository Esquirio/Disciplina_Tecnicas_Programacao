#include <stdio.h>

// Prototipo da funcao 
void Quadrado(int *num);

int main() {
  int num;
  printf("Digite um numero: ");
  scanf("%d", &num);
  printf("Numero digitado: %d\n", num);
  Quadrado(&num);  // Chamada da funcao
  printf("O valor do quadrado eh: %d\n", num);
  return 0;
}  // Fim da funcao int main()

void Quadrado(int *num) {
  *num = (*num) * (*num);
}  // Fim da funcao int quadrado()
