#include <stdio.h> // Fun��es de I/O, etc.

int main(){
  int num; // Declara��o da vari�vel
  // Mensagem para o usu�rio
  printf("Digite um numero: ");
  scanf("%d", &num);
  // Verificar se � par ou �mpar
  if (!(num%2))
    printf("O numero %d eh par.\n", num);
  else
    printf("O numero %d eh impar.\n", num);
  return 0; // Retorna um valor inteiro
}// Fim da fun��o main()

/*
  if (num%2 == 0){
    printf("O numero %d eh par.\n", num);
  }// Fim do if
  else{
    printf("O numero %d eh impar.\n", num);
  }// Fim do else
*/
