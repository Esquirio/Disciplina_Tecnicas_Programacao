#include <stdio.h> // Necessário para o printf
#include <conio.h> // Necessário para o getch e getche

/* Funcão: main() */
int main(){
  char ch_01, ch_02; // Declaração de variáveis
  // Mensagem para o usuário
  printf("Ler um char com getch: ");
  ch_01 = getch();   // Ler caractere com getch()
  // Mensagem para o usuário
  printf("\nLer um char com getche: ");
  ch_02 = getche();  // Ler caractere com getche()

  // Imprime valor lido na tela
  printf("\n------------------------------\n");
  printf("Caractere lido com getch: %c\n", ch_01);
  printf("Caractere lido com getche: %c\n", ch_02);
  return 0;
}// Fim da função main()


