#include <stdio.h> // Fun��es de I/O, etc.
#include <string.h> // Fun��e de strings
/* Func�o: main() */
int main()
{
  char nome_01[15] = "Beagle", nome_02[15] = "Pug";
  //Imprimindo valores iniciais
  printf("Valor inicial da string 1: %s. \n", nome_01);
  printf("Valor inicial da string 2: %s. \n\n", nome_02);
  // Fun��o strcpy
  strcpy(nome_01, "Border Collie");
  strcpy(nome_02, "Poodle");
  //Imprimindo valores finais
  printf("Valor final da string 1: %s. \n", nome_01);
  printf("Valor final da string 2: %s. \n\n", nome_02);
  return 0;
}// Fim da fun��o main()
