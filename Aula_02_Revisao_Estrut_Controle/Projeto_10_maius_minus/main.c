#include <ctype.h>  // Funcão isupper islower
#include <stdio.h>  // Funções de I/O, etc.

/* Funcão: main() */
int main() {
  char letra = ' ';
  printf("Digite uma letra: ");
  scanf(" %c", &letra);

  // Testa se está na faixa de maiusculas
  if (isupper(letra)) printf("Voce digitou uma letra maiuscula!\n");
  // Testa se está na faixa de minusculas
  else if (islower(letra))
    printf("Voce digitou uma letra minuscula!\n");
  else
    printf("Nao eh uma letra do alfabeto!\n");
  return 0;
}  // Fim da função main()

/* Exercício 03A
  // Testa se está na faixa de maiusculas
  if(letra >= 'A' && letra <= 'Z')
    printf("Voce digitou uma letra maiuscula!\n");
  // Testa se está na faixa de minusculas
  else if(letra >= 'a' && letra <= 'z')
    printf("Voce digitou uma letra minuscula!\n");
  else
    printf("Nao eh uma letra do alfabeto!\n");
*/
