#include <stdio.h>  //Funções de I/O
/* Funcao main() */
int main() {
  // Declara uma variavel int e um ponteiro int
  int num_a = 10, *pt;
  pt = &num_a;  // Ponteiro pt aponta para variavel
  printf("\nEndereco apontado: %u %u \n", pt, &num_a);
  printf("\nEndereco do ponteiro: %u \n", &pt);
  printf("\nConteudo da variavel apontada: %d %d\n", *pt, num_a);
  return 0;
}  // Fim da funcao main()
