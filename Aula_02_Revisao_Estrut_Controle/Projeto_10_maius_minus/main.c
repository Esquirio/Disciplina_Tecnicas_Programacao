#include <stdio.h> // Fun��es de I/O, etc.
#include <ctype.h> // Func�o isupper islower

/* Func�o: main() */
int main(){
  char letra = ' ';
  printf("Digite uma letra: ");
  scanf(" %c", &letra);

  // Testa se est� na faixa de maiusculas
  if(isupper(letra))
    printf("Voce digitou uma letra maiuscula!\n");
  // Testa se est� na faixa de minusculas
  else if(islower(letra))
    printf("Voce digitou uma letra minuscula!\n");
  else
    printf("Nao eh uma letra do alfabeto!\n");
  return 0;
}// Fim da fun��o main()

/* Exerc�cio 03A
  // Testa se est� na faixa de maiusculas
  if(letra >= 'A' && letra <= 'Z')
    printf("Voce digitou uma letra maiuscula!\n");
  // Testa se est� na faixa de minusculas
  else if(letra >= 'a' && letra <= 'z')
    printf("Voce digitou uma letra minuscula!\n");
  else
    printf("Nao eh uma letra do alfabeto!\n");
*/
