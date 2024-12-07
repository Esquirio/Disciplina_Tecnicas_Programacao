#include <stdio.h>

int main() {
  FILE *pArquivo;
  char str[] = "RAs dos alunos\n", ch = 's';
  long num_ra;
  pArquivo = fopen("arquivo.txt", "w");
  fprintf(pArquivo, "%s", str);
  fclose(pArquivo);

  while (ch != 'n') {
    printf("Digite o RA do aluno: ");
    scanf("%i", &num_ra);
    fflush(stdin);
    pArquivo = fopen("arquivo.txt", "a");
    fprintf(pArquivo, "%i\n", num_ra);
    fclose(pArquivo);
    printf("Deseja continuar: s-sim ou n-nao: ");
    ch = getchar();
  }  // Fim do while

  printf("Dados gravados.\n\n");
  // Lê e imprime os dados do arquivo na tela
  system("TYPE arquivo.txt");
  return (0);
}  // Fim da funcao main()
