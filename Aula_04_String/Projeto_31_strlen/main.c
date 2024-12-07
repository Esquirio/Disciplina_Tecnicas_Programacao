#include <stdio.h>   // Funções de I/O, etc.
#include <string.h>  // Funçõe de strings
/* Funcão: main() */
int main() {
  char nome_01[15], nome_02[15];
  int tam_01, tam_02;
  // Digitando strings
  printf("Digite uma string: ");
  gets(nome_01);
  printf("Digite outra string: ");
  gets(nome_02);
  // Função strlen
  tam_01 = strlen(nome_01);
  tam_02 = strlen(nome_02);
  // Imprimindo valores finais
  printf("String 1: %s. \n", nome_01);
  printf("Tamanho da string 1: %d. \n\n", tam_01);
  printf("String 2: %s. \n", nome_02);
  printf("Tamanho da string 2: %d. \n\n", tam_02);
  return 0;
}  // Fim da função main()
