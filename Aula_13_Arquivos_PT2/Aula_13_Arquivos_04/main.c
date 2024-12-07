#include <conio.h>  //Para getch()
#include <stdio.h>  //Define FILE

typedef struct Livro {
  char Titulo[50];
  char Autor[50];
  short NumReg;
  double Preco;
} Livro;

void PrintLivro(Livro livro);

int main() {
  Livro livro01;
  char resp;
  FILE *fptr;
  if ((fptr = fopen("Livros.Dat", "rb")) == NULL) exit(1);
  printf("Imprimindo os Objetos lidos:\n");
  while (fread(&livro01, sizeof(Livro), 1, fptr) == 1) PrintLivro(livro01);

  fclose(fptr);
  return 0;
}  // Fim funcao main()

void PrintLivro(Livro livro) {
  printf("\nTitulo: %s\n", livro.Titulo);
  printf("Autor: %s\n", livro.Autor);
  printf("No. Reg: %hd\n", livro.NumReg);
  printf("Preco: %.2f\n", livro.Preco);
}  // Fim void PrintLivro(Livro livro)
