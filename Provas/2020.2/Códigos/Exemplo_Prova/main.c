#include <stdio.h>
#include <stdlib.h>
int main(){
  int num = 0, estado = 0;
  char cont = 's';
  /*Repete o loop enquanto n�o for digitado o caractere n.
    Para qualquer outro caractere digitado diferente de n
    o la�o continua, n�o necessariamente deve ser s.
  */
  while(cont != 'n'){
    /*Testa ser o valor digitado � um n�mero de acordo
      com o valor retornado pela fun��o scanf. A fun��o
      scanf retorna a quantidade de itens efetivamente
      lidos. Dessa forma, se o valor o c�digo de formata��o
      � %d, a fun��o retorna 0 para qualquer valor digitado
      que n�o seja um n�mero e diferente de 0 para um n�mero.
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
