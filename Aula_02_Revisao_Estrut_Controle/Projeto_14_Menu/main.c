#include <stdio.h> // Funções de I/O, etc.
/* Funcão: main() */
int main(){
  int valor;
  // Laço de repetição do Menu
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
}// Fim da função main()

