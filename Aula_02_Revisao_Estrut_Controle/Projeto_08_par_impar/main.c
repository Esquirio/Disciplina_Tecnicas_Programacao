#include <stdio.h> // Fun��es de I/O, etc.

/* Func�o: main() */
int main(){
  int num;
  printf("Digite um numero: ");
  scanf("%i", &num);
  // Testa se n�mero � par ou �mpar
  if(!(num%2))
    printf("Numero eh par!\n");
  else
    printf("Numero eh impar!\n");
  return 0;
}// Fim da fun��o main()

/* Exerc�cio 1A
  if(num%2 == 0){
    printf("Numero eh par!\n");
  }// Fim do if()
  else{
    printf("Numero eh impar!\n");
  }// Fim do else
*/
