#include <stdio.h>

int main() {
  FILE *fptr;  // Ponteiro para um arquivo
  char ch[50];
  // Verifica se o arquivo foi aberto
  if ((fptr = fopen("arqtext.txt", "r")) == NULL) {
    puts("Nao foi possivel abrir o arquivo.");
    exit(1);
  }  // Fim do if
  else {
    while (fgets(ch, 50, fptr) != NULL) printf("%s", ch);
  }  // Fim do else

  fclose(fptr);  // Fecha o arquivo
  return 0;
}  // Fim da funcao main()
