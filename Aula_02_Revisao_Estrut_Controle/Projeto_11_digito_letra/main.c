#include <stdio.h> // Fun��es de I/O, etc.
#include <ctype.h> // Fun��es isalpha isdigit

/* Func�o: main() */
int main(){
  char ch = ' ';
  printf("Digite uma tecla: ");
  scanf(" %c", &ch);

  // Testa se � letra
  if(isalpha(ch))
    printf("Voce digitou uma letra!\n");
  // Testa se � d�gito
  else if(isdigit(ch))
    printf("Voce digitou um digito!\n");
  else
    printf("Nao eh nem letra ou digito!\n");
  return 0;
}// Fim da fun��o main()

/* Exerc�cio 4A
  // Testa se est� na faixa de maiusculas
  if(ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
    printf("Voce digitou uma letra!\n");
  // Testa se est� na faixa de minusculas
  else if(ch >= '0' && ch <= '9')
    printf("Voce digitou um digito!\n");
  else
    printf("Nao eh nem letra ou digito!\n");
*/
