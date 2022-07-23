#include <stdio.h>
#include <stdlib.h>
typedef struct func
{
  int id;
  char nome[50];
  long cpf;
  int dia;
  int mes;
  int ano;
} tFuncionario;

int main(){
  tFuncionario dados;
  dados.id = 1;
  //Leitura dos dados
  printf("\nDigite o nome do funcionario: ");
  gets(dados.nome);
  printf("\nDigite o CPF: ");
  scanf("%li", &dados.cpf);
  printf("\nDigite a data de nascimento: ");
  scanf("%i%i%i", &dados.dia, &dados.mes, &dados.ano);
  //Imprime os dados
  printf("\nID: %d\n", dados.id);
  printf("\nNome: %s\n", dados.nome);
  printf("\nCPF: %d\n", dados.cpf);
  printf("\nData de nascimento: %i/%i/%i\n\n", dados.dia, dados.mes, dados.ano);
  return 0;
}//Fim da main()

