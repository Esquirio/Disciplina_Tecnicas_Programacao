#include <stdio.h> // Fun��es de I/O, etc.
#include <string.h> // Fun��e de strings
/* Func�o: main() */
int main()
{
  char nome_01[15] = "Beagle", nome_02[15] = "Pug";
  //Imprimindo valores iniciais
  printf("Valor inicial da string 1: %s. \n", nome_01);
  printf("Valor inicial da string 2: %s. \n\n", nome_02);
  // Fun��o strcat
  strcat(nome_01, " e ");
  strcat(nome_01, nome_02);
  //Imprimindo valores finais
  printf("Valor final da string 1: %s. \n", nome_01);
  printf("Valor final da string 2: %s. \n\n", nome_02);
  return 0;
}// Fim da fun��o main()
