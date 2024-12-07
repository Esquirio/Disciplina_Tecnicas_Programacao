#include <stdio.h>    // Necessário para usar printf
#include <windows.h>  // Biblioteca de API do Windows

/* Função:    int main() */
int main() {
  // Função SetConsoleTextAttribute para configurar a cor do console
  // A color é definida por um número de 0 a 255
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
  // Mensagem escrita de verde
  printf("I want to be nice today!\n");
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
  // Mensagem escrita de amarelo
  printf("I want to be nice today!\n");
  return 0;  // Retorna um valor inteiro
}  // Fim da função int main()

/*
//No Linux
http://web.theurbanpenguin.com/adding-color-to-your-output-from-c/

printf("\033[0;31m"); //Set the text to the color red
printf("Hello\n"); //Display Hello in red
printf("\033[0m"); //Resets the text to default color
*/
