#include <stdio.h>  // Fun��es de I/O
#include <string.h> // Fun��es string
/* Fun��o main () */
int main()
{
  //Declara��o de duas strings de tamanho 20
  char string_01[20], string_02[20];
  printf("Digite uma string: ");
  gets(string_01); //L� a primeira string
  strcpy(string_02,string_01);
  //Imprime string 01
  printf("String 01: %s\n", string_01);
  //Imprime string 02
  printf("String 02: %s\n", string_02);
  return 0;
}//Fim da fun��o main()
