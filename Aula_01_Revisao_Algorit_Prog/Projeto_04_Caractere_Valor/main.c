#include <stdio.h>                  // Necess�rio para usar printf

/* Fun��o:    int main()*/
int main()
{
  char letra;                       // Cria vari�vel char com o valor A
  printf("Digite um caractere: ");  // Intera��o com o usu�rio
  scanf("%c", &letra);              // Recebe um valor do teclado
  printf("\n%c", letra);            // Imprime o caractere
  printf("\n%d", letra);            // Imprime em decimal
  printf("\n%x", letra);            // Imprime em hexadecimal
  printf("\n%o", letra);            // Imprime em octal
  return 0;                         // Retorna um valor inteiro
}// Fim da fun��o int main()

