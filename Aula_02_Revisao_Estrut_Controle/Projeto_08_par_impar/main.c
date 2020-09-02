#include <stdio.h>  // Funções de I/O, etc.
#include <locale.h> // Mudar idioma
/* Funcão: main() */
int main(){
  char oper;
  // Configura a língua portuguesa
  setlocale(LC_ALL, "Portuguese");
  printf("Digite um sinal de operação matemático: ");
  scanf(" %c", &oper);
  // Testa a operação
  switch(oper){
  case '+':
    printf("Sinal de adição!\n");
    break;
  case '-':
    printf("Sinal de subtração!\n");
    break;
  case '*':
    printf("Sinal de multiplicação!\n");
    break;
  case '/':
    printf("Sinal de divisão!\n");
    break;
  default:
    printf("Outra operação matemática!\n");
    break;
  }// Fim do switch
  return 0;
}// Fim da função main()

/* Exercício 2A
  if(oper == '+')
    printf("Sinal de adição!\n");
  else if(oper == '-')
    printf("Sinal de subtração!\n");
  else if(oper == '*')
    printf("Sinal de multiplicação!\n");
  else if(oper == '/')
    printf("Sinal de divisão!\n");
  else
    printf("Outra operação matemática!\n");
*/
