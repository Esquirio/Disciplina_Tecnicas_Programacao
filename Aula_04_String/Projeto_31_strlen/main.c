#include <stdio.h> // Fun��es de I/O, etc.
#include <string.h> // Fun��e de strings
/* Func�o: main() */
int main()
{
  char nome_01[15], nome_02[15];
  int tam_01, tam_02;
  //Digitando strings
  printf("Digite uma string: ");
  gets(nome_01);
  printf("Digite outra string: ");
  gets(nome_02);
  // Fun��o strlen
  tam_01=strlen(nome_01);
  tam_02=strlen(nome_02);
  //Imprimindo valores finais
  printf("String 1: %s. \n", nome_01);
  printf("Tamanho da string 1: %d. \n\n", tam_01);
  printf("String 2: %s. \n", nome_02);
  printf("Tamanho da string 2: %d. \n\n", tam_02);
  return 0;
}// Fim da fun��o main()
