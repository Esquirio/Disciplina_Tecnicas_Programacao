#include <stdio.h> // Fun��es de I/O, etc.
/* Func�o: main() */
int main()
{
  int num; // Declara vari�vel inteira
  // La�o de repeti��o de 0 a 100
  for(num = 0; num <= 100; num=num+2)
    printf("%d ", num);

  printf("\n\n");
  return 0;
}// Fim da fun��o main()

/*
// La�o de repeti��o de 0 a 100
  for(num = 0; num <= 100; num++){
    //Testa se o n�mero � par
    if(num%2 == 0){
      printf("%d ", num);
    }// Fim do if
  }//Fim do for
  printf("\n\n");
*/
