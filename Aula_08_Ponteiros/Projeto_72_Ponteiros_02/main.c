#include <stdio.h> //Funções de I/O
/* Funcao main() */
int main()
{
  //Declara uma variavel int e um ponteiro int
  int  num_a = 10, *pt;
  pt = &num_a; //Ponteiro pt aponta para variavel
  printf("\nEndereco apontado: %d %d \n", pt, &num_a);
  printf("\nEndereco do ponteiro: %d \n", &pt);
  printf("\nConteudo da variavel apontada: %d \n", *pt);
  return 0;
}//Fim da funcao main()
