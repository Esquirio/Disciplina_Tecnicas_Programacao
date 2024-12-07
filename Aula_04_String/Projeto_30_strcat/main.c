#include <stdio.h>   // Funções de I/O, etc.
#include <string.h>  // Funçõe de strings
/* Funcão: main() */
int main() {
  char nome_01[15] = "Beagle", nome_02[15] = "Pug";
  // Imprimindo valores iniciais
  printf("Valor inicial da string 1: %s. \n", nome_01);
  printf("Valor inicial da string 2: %s. \n\n", nome_02);
  // Função strcat
  strcat(nome_01, " e ");
  strcat(nome_01, nome_02);
  // Imprimindo valores finais
  printf("Valor final da string 1: %s. \n", nome_01);
  printf("Valor final da string 2: %s. \n\n", nome_02);
  return 0;
}  // Fim da função main()
