#include <stdio.h> // Funções de I/O, etc.

int main(){
  int num; // Declaração da variável
  // Mensagem para o usuário
  printf("Digite um numero: ");
  scanf("%d", &num);
  // Verificar se é par ou ímpar
  if (!(num%2))
    printf("O numero %d eh par.\n", num);
  else
    printf("O numero %d eh impar.\n", num);
  return 0; // Retorna um valor inteiro
}// Fim da função main()

/*
  if (num%2 == 0){
    printf("O numero %d eh par.\n", num);
  }// Fim do if
  else{
    printf("O numero %d eh impar.\n", num);
  }// Fim do else
*/
