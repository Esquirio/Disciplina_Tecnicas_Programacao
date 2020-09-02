#include <stdio.h>  // Fun��es de I/O, etc.
#include <locale.h> // Mudar idioma
/* Func�o: main() */
int main(){
  char oper;
  // Configura a l�ngua portuguesa
  setlocale(LC_ALL, "Portuguese");
  printf("Digite um sinal de opera��o matem�tico: ");
  scanf(" %c", &oper);
  // Testa se n�mero � par ou �mpar
  switch(oper){
  case '+':
    printf("Sinal de adi��o!\n");
    break;
  case '-':
    printf("Sinal de subtra��o!\n");
    break;
  case '*':
    printf("Sinal de multiplica��o!\n");
    break;
  case '/':
    printf("Sinal de divis�o!\n");
    break;
  default:
    printf("Outra opera��o matem�tica!\n");
    break;
  }// Fim do switch
  return 0;
}// Fim da fun��o main()

/* Exerc�cio 2A
  if(oper == '+')
    printf("Sinal de adi��o!\n");
  else if(oper == '-')
    printf("Sinal de subtra��o!\n");
  else if(oper == '*')
    printf("Sinal de multiplica��o!\n");
  else if(oper == '/')
    printf("Sinal de divis�o!\n");
  else
    printf("Outra opera��o matem�tica!\n");
*/
