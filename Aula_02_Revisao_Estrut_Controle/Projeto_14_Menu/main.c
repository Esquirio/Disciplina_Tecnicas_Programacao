#include <stdio.h> // Fun��es de I/O, etc.
/* Func�o: main() */
int main(){
  int valor;
  // La�o de repeti��o do Menu
  do{
    printf("***** Exemplo Menu *****\n");
    printf("0 - Cadastro de Clientes\n");
    printf("1 - Consultar de Clientes\n");
    printf("2 - Excluir de Clientes\n");
    printf("3 - Sair\n\n");
    printf("Digite uma opcao: ");
    scanf("%d", &valor);
    printf("\n");
  }while(valor != 3);
  return 0;
}// Fim da fun��o main()

