#include <stdio.h> // Fun��es de I/O, etc.
/* Func�o: main() */
int main()
{
  char nome [100];
  printf("\nDigite o nome: ");
  gets(nome); // L� string com gets
  printf("%s",nome);
  return 0;
}// Fim da fun��o main()

