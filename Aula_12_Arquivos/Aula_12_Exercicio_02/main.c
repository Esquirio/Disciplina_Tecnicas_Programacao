#include <stdio.h>

int main() {
  FILE *pArquivo;
  char ch = 's';
  long num_ra;
  pArquivo = fopen("arquivo.txt", "r");

  // Lê um caractere do arquivo
  while ((ch = fgetc(pArquivo)) != EOF)
    printf("%c", ch);  // Imprime o caractere na tela
  fclose(pArquivo);    // Fecha o arquivo

  fclose(pArquivo);

  return 0;
}  // Fim da funcao main()

/*
    fgets(RA, 4, pArquivo);
    printf("%s", RA);
    fgets(nome, 19, pArquivo);
    printf("%s", nome);

    fgets(RA, 9, pArquivo);
    printf("%s", RA);
    fgets(nome,6, pArquivo);
    printf("%s", nome);

    fgets(RA, 9, pArquivo);
    printf("%s", RA);
    fgets(nome,8, pArquivo);
    printf("%s", nome);
*/
