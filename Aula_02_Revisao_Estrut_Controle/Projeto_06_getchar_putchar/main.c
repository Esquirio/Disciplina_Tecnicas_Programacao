#include <stdio.h> // Necessário getchar e printf

/* Funcão: main() */
int main(){
  char ch_01, ch_02; // Declaração de variáveis
  // Mensagem para o usuário
  printf("Ler primeiro char: ");
  ch_01 = getchar(); // Ler caractere com getchar()
  fflush(stdin);     // Limpar buffer de entrada
  // Mensagem para o usuário
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
}// Fim da função main()

