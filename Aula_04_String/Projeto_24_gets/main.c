#include <stdio.h> // Funções de I/O, etc.
/* Funcão: main() */
int main()
{
  char nome [100];
  printf("\nDigite o nome: ");
  gets(nome); // Lê string com gets
  printf("%s",nome);
  return 0;
}// Fim da função main()

