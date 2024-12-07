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
  long nrec, rec, posicao;

  if ((fptr = fopen("Livros.Dat", "rb")) == NULL) exit(1);

  fseek(fptr, 0, 2);  // Desloca 0 bytes a partir da posicao atual

  nrec = ftell(fptr) / sizeof(Livro);
  printf("O numero de registros eh: %ld\n", nrec);

  puts("Insira o numero do registro:");
  scanf("%ld", &rec);
  if (rec > 0 && rec <= nrec) {
    posicao = (rec - 1) * sizeof(Livro);
    fseek(fptr, posicao, 0);                  // Posiciona no registro desejado
    fread(&livro01, sizeof(Livro), 1, fptr);  // Posiciona no registro desejado
    PrintLivro(livro01);
    fclose(fptr);
  }  // Fim if(rec>0 && rec <= nrec)
  else
    puts("Registro nao existe!");

  return 0;
}  // Fim funcao main()

void PrintLivro(Livro livro) {
  printf("\nTitulo: %s\n", livro.Titulo);
  printf("Autor: %s\n", livro.Autor);
  printf("No. Reg: %hd\n", livro.NumReg);
  printf("Preco: %.2f\n", livro.Preco);
}  // Fim void PrintLivro(Livro livro)
