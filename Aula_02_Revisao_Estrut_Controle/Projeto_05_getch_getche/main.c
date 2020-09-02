#include <stdio.h> // Necess�rio para o printf
#include <conio.h> // Necess�rio para o getch e getche

/* Func�o: main() */
int main(){
  char ch_01, ch_02; // Declara��o de vari�veis
  // Mensagem para o usu�rio
  printf("Ler um char com getch: ");
  ch_01 = getch();   // Ler caractere com getch()
  // Mensagem para o usu�rio
  printf("\nLer um char com getche: ");
  ch_02 = getche();  // Ler caractere com getche()

  // Imprime valor lido na tela
  printf("\n------------------------------\n");
  printf("Caractere lido com getch: %c\n", ch_01);
  printf("Caractere lido com getche: %c\n", ch_02);
  return 0;
}// Fim da fun��o main()


