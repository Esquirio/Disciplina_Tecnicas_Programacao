#include <stdio.h>

int main() {
  FILE *fptr;  // Ponteiro para um arquivo
  short int ch;
  // Verifica se o arquivo foi aberto
  if ((fptr = fopen("arqtext.txt", "r")) == NULL) {
    puts("Nao foi possivel abrir o arquivo.");
    exit(1);
  }  // Fim do if

  while (!feof(fptr)) {
    ch = fgetc(fptr);  // Le o caractere
    printf("%c", ch);  // Imprime o caractere
  }  // Fim do while()
  fclose(fptr);  // Fecha o arquivo
  return 0;
}  // Fim da funcao main()
