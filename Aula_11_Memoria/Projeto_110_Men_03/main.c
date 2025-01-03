#include <stdio.h>
#include <stdlib.h>

int main() {
  // criando um ponteiro para int
  int *ptr;
  // alocando memoria para armazenar um numero inteiro
  //  e associando esta memoria ao ponteiro
  ptr = (int *)malloc(sizeof(int));
  // atribuindo um valor ao ponteiro
  *ptr = 42;
  // imprimindo o endereco do ponteiro e valor
  printf("\nEndereco %x", ptr);
  printf("\nValor %d", *ptr);

  // liberando a memoria alocada
  free(ptr);
  // imprimindo o endereco do ponteiro e valor
  printf("\nEndereco %x", ptr);
  printf("\nValor %d", *ptr);
  return 0;
}  // Fim da funcao main()
