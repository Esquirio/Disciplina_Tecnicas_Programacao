#include <stdio.h>  // Funções de I/O
typedef struct pesquisa
{
  int apartamento;
  int filhos;
  float salario;
} tPesquisa;
/* Função main() */
int main(){
  //criando variavel do
  //mesmo tipo da struct
  tPesquisa p;
  // Atribuindo valores
  p.apartamento =12;
  p.filhos = 2;
  p.salario = 500.0;
  //Leitura dos dados
  printf("\n digite nro do apartamento: ");
  scanf("%d", &p.apartamento);
  printf("\n digite qtd Filhos: ");
  scanf("%d", &p.filhos);
  printf("\n digite Salario: ");
  scanf("%f", &p.salario);
  //Escrita
  printf("\nApartamento: %d - Filhos: %d - Salario: R$%.2f", p.apartamento, p.filhos, p.salario);

  return 0;
}//Fim da função main()
