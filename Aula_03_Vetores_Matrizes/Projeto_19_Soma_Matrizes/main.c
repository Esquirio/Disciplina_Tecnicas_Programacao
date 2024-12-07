#include <stdio.h>  // Funções de I/O, etc.
#define LIN 5       // Linha da Matriz
#define COL 3       // Coluna da Matriz
/* Funcão: main() */
int main() {
  int mat_a[LIN][COL], mat_b[LIN][COL], mat_c[LIN][COL];
  // Leitura da Matriz A
  printf("Digite os valores da Matriz A:\n");
  for (int i = 0; i < LIN; i++) {
    for (int j = 0; j < COL; j++) {
      printf("Elemento[%d][%d]: ", i, j);
      scanf("%d", &mat_a[i][j]);
    }  // Fim do for(int j; j<COL; j++)
  }  // Fim do for(int i; i<LIN; i++)

  // Leitura da Matriz B
  printf("\n\nDigite os valores da Matriz B:\n");
  for (int i = 0; i < LIN; i++) {
    for (int j = 0; j < COL; j++) {
      printf("Elemento[%d][%d]: ", i, j);
      scanf("%d", &mat_b[i][j]);
    }  // Fim do for(int j; j<COL; j++)
  }  // Fim do for(int i; i<LIN; i++)

  // Soma das duas matrizes
  for (int i = 0; i < LIN; i++)
    for (int j = 0; j < COL; j++) mat_c[i][j] = mat_a[i][j] + mat_b[i][j];

  // Imprimindo as matrizes
  printf("\n\n\n\tMatriz A\t\t\tMatriz B\t\tMatriz C\n");
  for (int i = 0; i < LIN; i++) {
    for (int j = 0; j < COL; j++) printf("%d\t", mat_a[i][j]);
    printf("|\t");
    for (int j = 0; j < COL; j++) printf("%d\t", mat_b[i][j]);
    printf("|\t");
    for (int j = 0; j < COL; j++) printf("%d\t", mat_c[i][j]);
    printf("\n");  // Nova linha da Matriz
  }  // Fim do for(int i=0; i<LIN; i++)

  return 0;
}  // Fim da função main()
