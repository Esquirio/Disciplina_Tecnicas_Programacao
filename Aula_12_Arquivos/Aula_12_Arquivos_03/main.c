#include <stdio.h>

int main() {
  FILE *fptr;  // Ponteiro para um arquivo
  short int ch;
  // Abre arquivo para ler em modo texto
  fptr = fopen("arqtext.txt", "r");
  // Lê um caractere do arquivo
  while (!feof(fptr)) {
    ch = fgetc(fptr);  // Le o caractere
    printf("%c", ch);  // Imprime o caractere
  }  // Fim do while()
  fclose(fptr);  // Fecha o arquivo
  return 0;
}  // Fim da funcao main()
