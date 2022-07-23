#include <stdio.h>
#include <stdlib.h>
int main(){
  int num = 0, estado = 0;
  char cont = 's';
  /*Repete o loop enquanto não for digitado o caractere n.
    Para qualquer outro caractere digitado diferente de n
    o laço continua, não necessariamente deve ser s.
  */
  while(cont != 'n'){
    /*Testa ser o valor digitado é um número de acordo
      com o valor retornado pela função scanf. A função
      scanf retorna a quantidade de itens efetivamente
      lidos. Dessa forma, se o valor o código de formatação
      é %d, a função retorna 0 para qualquer valor digitado
      que não seja um número e diferente de 0 para um número.
    */
    do{
      printf("Digite um numero: ");
      estado = scanf("%d", &num);
      printf("Estado: %d \n\n", estado);
      fflush(stdin);
      if(estado == 0)
        printf("Valor invalido! \n\n");
    }while(estado == 0);

    if (!(num%2))
      printf("O numero %d eh par.\n", num);
    else
      printf("O numero %d eh impar.\n", num);
    printf("Deseja continuar? s-sim n-nao ");
    scanf(" %c", &cont);
  }
  return 0;
}
