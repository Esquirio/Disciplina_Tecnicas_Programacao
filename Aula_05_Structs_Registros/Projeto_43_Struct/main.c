#include <stdio.h> //Funções de I/O
struct pesquisa
{
  int apartamento;
  int filhos;
  float salario;
};
int main()
{
  //Cria uma variavel do tipo struct
   struct pesquisa p;

  //Atribuindo valores
  p.apartamento = 12;
  p.filhos = 2;
  p.salario = 500.00;
  //Leitura
  printf("\nDigite numero do apartamento: ");
  scanf("%d", &p.apartamento);
  printf("\nDigite qtd Filhos: ");
  scanf("%d", &p.filhos);
  printf("\nDigite Salario: ");
  scanf("%f", &p.salario);

  //Escrita
  printf("\nApartamento: %d, Filhos: %d, Salario: R$%.2f", p.apartamento, p.filhos, p.salario);
  putchar('\n');
  return 0;
}//Fim da main()
