#include <stdio.h> // Necess�rio getchar e printf

/* Func�o: main() */
int main(){
  char ch_01, ch_02; // Declara��o de vari�veis
  // Mensagem para o usu�rio
  printf("Ler primeiro char: ");
  ch_01 = getchar(); // Ler caractere com getchar()
  fflush(stdin);     // Limpar buffer de entrada
  // Mensagem para o usu�rio
  printf("Ler segundo char: ");
  ch_02 = getchar(); // Ler caractere com getchar()

  // Imprime valor lido na tela
  printf("\n------------------------------\n");
  printf("Primeiro caractere lido: ");
  putchar(ch_01);
  printf("\nSegundo caractere lido:");
  putchar(ch_02);
  putchar('\n');
  return 0;
}// Fim da fun��o main()

