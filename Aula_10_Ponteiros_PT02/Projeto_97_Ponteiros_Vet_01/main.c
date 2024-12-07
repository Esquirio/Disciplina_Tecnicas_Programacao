#include <stdio.h>
int main() {
  int vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int *p;
  p = vetor;  // Ponteiro aponta para o início do vetor
  printf("O terceiro elemento do vetor e: %d\n", p[2]);
  printf("O terceiro elemento do vetor e: %d\n", *(p + 2));
  printf("O terceiro elemento do vetor e: %d\n", vetor[2]);
  printf("O terceiro elemento do vetor e: %d\n", *(vetor + 2));
  return 0;
}  // Fim da função main()
