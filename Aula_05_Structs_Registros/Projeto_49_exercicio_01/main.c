#include <stdio.h>
#include <string.h>
typedef struct {
  char nome[20];
  int idade;
  float salario;
  char registro;
} tPessoa;

int main() {
  tPessoa fulano;

  strcpy(fulano.nome, "Irmao do Jorel");
  fulano.idade = 8;
  fulano.salario = 12.56;
  fulano.registro = 'V';

  printf("O %s tem %d anos.\n", fulano.nome, fulano.idade);
  printf("Sua mesada eh R$%.2f\n", fulano.salario);
  if (fulano.registro == 'V')
    printf("Seu registro esta ativo.");
  else
    printf("Seu registro foi apagado.");

  return 0;
}  // Fim da função main()
