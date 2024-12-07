#include <stdio.h>
#define TAM 1
typedef struct {
  char titulo[30];
  char autor[50];
  int registro;
  float preco;
} tLivro;

int main() {
  tLivro livros[TAM];
  for (int i = 0; i < TAM; i++) {
    printf("Digite o titulo do livro: ");
    gets(livros[i].titulo);
    fflush(stdin);
    printf("Digite o autor do livro: ");
    gets(livros[i].autor);
    fflush(stdin);
    printf("Digite o registro: ");
    scanf("%d", &livros[i].registro);
    printf("Digite o preco: ");
    scanf("%f", &livros[i].preco);
  }  // Fim do for

  printf("\n\n--------------------------\n");
  printf("Registro\tTitulo\tAutor\tPreco\n");
  for (int i = 0; i < TAM; i++) {
    printf("%d\t\t", livros[i].registro);
    printf("%s\t", livros[i].titulo);
    printf("%s\t", livros[i].autor);
    printf("%f\n", livros[i].preco);
  }  // Fim do for
  return 0;
}
