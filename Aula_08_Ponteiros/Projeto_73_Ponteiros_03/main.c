#include <stdio.h>

int main() {
  int i = 10;  // Declarei uma variável
  int *pont;   // Declarei um ponteiro
  pont = &i;   // Inicilizei o ponteiro
  printf("Valor de i antes de alterar: %d \n\n", i);
  *pont = 5;  // Modifico o conteúdo da variável i
  printf("Valor depois: %d\t%d\t%p\n", i, *pont, pont);
  return 0;
}
