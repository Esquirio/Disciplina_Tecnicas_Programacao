#include <stdio.h>  // Fun��es de I/O
#include <string.h> // Fun��es string
/* Fun��o main () */
int main(){
  //Declara��o de duas strings de tamanho 20
  char string_01[20], string_02[20];
  printf("Digite uma string: ");
  gets(string_01); //L� a primeira string
  printf("Digite outra string: ");
  gets(string_02); //L� a segunda string
  strcat(string_01,string_02);
  //Imprime string 01
  printf("String 01: %s\n", string_01);
  return 0;
}//Fim da fun��o main()


