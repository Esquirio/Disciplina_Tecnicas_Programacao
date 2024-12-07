#include <stdio.h>
// Prototipo da funcao
void Muda_Matriz(int matrix[2][2]);

// Fun��o main()
int main() {
  int mat[2][2] = {0, 2, 4, 6};

  printf("Matriz antes:\n");
  // Imprimindo a matriz
  for (int i = 0; i <= 1; i++) {
    for (int j = 0; j <= 1; j++) printf("%d \t", mat[i][j]);
    putchar('\n');
  }  // Fim do for(int i = 0; i <=1; i++)

  printf("\n\nMatriz depois:\n");
  Muda_Matriz(mat);

  // Imprimindo a matriz
  for (int i = 0; i <= 1; i++) {
    for (int j = 0; j <= 1; j++) printf("%d \t", mat[i][j]);
    putchar('\n');
  }  // Fim do for(int i = 0; i <=1; i++)
  return 0;
}  // Fim da fun��o main()

// Fun��o Muda_Matriz()
void Muda_Matriz(int matrix[2][2]) {
  // Altera o conte�do da matriz
  for (int i = 0; i <= 1; i++)
    for (int j = 0; j <= 1; j++) matrix[i][j] = matrix[i][j] + 1;
}  // Fim da Fun��o Muda_Matriz())
