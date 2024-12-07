#include <stdio.h>
int main() {
  // Criando os ponteiros
  int *ptrint;
  float *ptrfloat;
  char *ptrchar;
  // Alocando memoria aos ponteiros
  ptrint = (int *)malloc(sizeof(int));
  ptrfloat = (float *)malloc(sizeof(float));
  ptrchar = (char *)malloc(sizeof(char));

  // Lendo valores para aos ponteiros
  printf("Digite um valor inteiro: ");
  scanf("%d", ptrint);
  printf("Digite um valor float: ");
  scanf("%f", ptrfloat);
  printf("Digite um valor char: ");
  scanf(" %c", ptrchar);

  // imprimindo o endereco e valor dos ponteiros
  printf("\nEndereco prtint: %u", ptrint);
  printf("\nValor ptrint: %d", *ptrint);
  printf("\nEndereco prtfloat: %u", ptrfloat);
  printf("\nValor ptrfloat: %.2f", *ptrfloat);
  printf("\nEndereco prtchar: %u", ptrchar);
  printf("\nValor ptrchar: %c", *ptrchar);
  return 0;
}  // Fim da main()
