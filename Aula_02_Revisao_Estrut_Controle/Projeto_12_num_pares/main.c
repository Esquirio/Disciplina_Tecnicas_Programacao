#include <stdio.h> // Funções de I/O, etc.
/* Funcão: main() */
int main()
{
  int num; // Declara variável inteira
  // Laço de repetição de 0 a 100
  for(num = 0; num <= 100; num=num+2)
    printf("%d ", num);

  printf("\n\n");
  return 0;
}// Fim da função main()

/*
// Laço de repetição de 0 a 100
  for(num = 0; num <= 100; num++){
    //Testa se o número é par
    if(num%2 == 0){
      printf("%d ", num);
    }// Fim do if
  }//Fim do for
  printf("\n\n");
*/
