#include <stdio.h>   // Funções de I/O
#include <string.h>  // Funções string
/* Função main () */
int main() {
  // Declaração de duas strings de tamanho 20
  char string_01[20], string_02[20];
  printf("Digite uma string: ");
  gets(string_01);  // Lê a primeira string
  printf("Digite outra string: ");
  gets(string_02);  // Lê a segunda string
  strcat(string_01, string_02);
  // Imprime string 01
  printf("String 01: %s\n", string_01);
  return 0;
}  // Fim da função main()
