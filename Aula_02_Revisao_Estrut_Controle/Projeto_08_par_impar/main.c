#include <stdio.h> // Funções de I/O, etc.

/* Funcão: main() */
int main(){
  int num;
  printf("Digite um numero: ");
  scanf("%i", &num);
  // Testa se número é par ou ímpar
  if(!(num%2))
    printf("Numero eh par!\n");
  else
    printf("Numero eh impar!\n");
  return 0;
}// Fim da função main()

/* Exercício 1A
  if(num%2 == 0){
    printf("Numero eh par!\n");
  }// Fim do if()
  else{
    printf("Numero eh impar!\n");
  }// Fim do else
*/
