#include <stdio.h> // Funções de I/O, etc.
#include <string.h> // Funçõe de strings
/* Funcão: main() */
int main()
{
  char nome_01[15], nome_02[15];
  int num = 0;
  //Digitando strings
  printf("Digite uma string: ");
  gets(nome_01);
  printf("Numero de caracteres que deseja copiar: ");
  scanf("%d", &num);
  // Função strncpy()
  strncpy(nome_02, nome_01, num);
  //Imprimindo valores
  printf("String 1: %s\n", nome_01);
  printf("String 2: %s\n\n", nome_02);
  return 0;
}// Fim da função main()
