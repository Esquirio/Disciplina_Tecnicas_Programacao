#include <stdio.h>    // Necess�rio para usar printf
#include <windows.h>  // Biblioteca de API do Windows

/* Fun��o:    int main() */
int main() {
  // Fun��o SetConsoleTextAttribute para configurar a cor do console
  // A color � definida por um n�mero de 0 a 255
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
  // Mensagem escrita de verde
  printf("I want to be nice today!\n");
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
  // Mensagem escrita de amarelo
  printf("I want to be nice today!\n");
  return 0;  // Retorna um valor inteiro
}  // Fim da fun��o int main()

/*
//No Linux
http://web.theurbanpenguin.com/adding-color-to-your-output-from-c/

printf("\033[0;31m"); //Set the text to the color red
printf("Hello\n"); //Display Hello in red
printf("\033[0m"); //Resets the text to default color
*/
