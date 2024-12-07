#include <stdio.h>

int main() {
  FILE *pArquivo;  // Ponteiro para um arquivo
  char str[35] = "Teste da funcao fwrite e fread!\n", str2[35];
  int BytesLidos;

  pArquivo = fopen("arquivo.txt", "w");
  fwrite(str, sizeof(str), 1, pArquivo);
  fclose(pArquivo);

  // Abre o arquivo para leitura
  pArquivo = fopen("arquivo.txt", "rb");
  // Verifica se o arquivo foi aberto para leitura
  if (pArquivo != NULL) {
    fread(str2, sizeof(str), 30, pArquivo);
    printf("%s", str2);
  }  // Fim do if
  else {
    printf("Nao foi possivel abrir o arquivo.");
    exit(1);
  }  // Fim do else

  fclose(pArquivo);
  return 0;
}  // Fim da funcao main()
