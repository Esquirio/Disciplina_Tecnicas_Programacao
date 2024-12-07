#include <ctype.h>  // Funções isalpha isdigit
#include <stdio.h>  // Funções de I/O, etc.

/* Funcão: main() */
int main() {
  char ch = ' ';
  printf("Digite uma tecla: ");
  scanf(" %c", &ch);

  // Testa se é letra
  if (isalpha(ch)) printf("Voce digitou uma letra!\n");
  // Testa se é dígito
  else if (isdigit(ch))
    printf("Voce digitou um digito!\n");
  else
    printf("Nao eh nem letra ou digito!\n");
  return 0;
}  // Fim da função main()

/* Exercício 4A
  // Testa se está na faixa de maiusculas
  if(ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
    printf("Voce digitou uma letra!\n");
  // Testa se está na faixa de minusculas
  else if(ch >= '0' && ch <= '9')
    printf("Voce digitou um digito!\n");
  else
    printf("Nao eh nem letra ou digito!\n");
*/
