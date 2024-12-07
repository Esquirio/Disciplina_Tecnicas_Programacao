#include <stdio.h>

int main() {
  FILE *pArquivo;  // ponteiro para arquivo
  // Abre arquivo para gravação
  pArquivo = fopen("arquivo.txt", "w");
  // Insere informação formatada
  fprintf(pArquivo, "Ola pessoal %d", 1000);
  fprintf(pArquivo, "teste1\n");
  fprintf(pArquivo, "teste2\n");
  fclose(pArquivo);  // fecha arquivo

  // Lê e imprime os dados do arquivo na tela
  system("TYPE arquivo.txt");
  return 0;
}  // Fim da funcao main()
