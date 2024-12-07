#include <stdio.h>

int main() {
  unsigned long int soma = 0;
  double produto = 1;

  for (int i = 51; i < 101; i++) {
    if (!(i % 2)) soma += i;
  }  // Fim do for
  for (int i = 0; i < 50; i++) {
    if (i % 2) produto *= i;
  }  // Fim do for
  printf("Soma dos inteiros pares de 51 a 101 eh: %d.\n", soma);
  printf("Produto dos inteiros impares de 0 a 50 eh: %.0f.\n", produto);
  return 0;
}  // Fim da funcao main()
