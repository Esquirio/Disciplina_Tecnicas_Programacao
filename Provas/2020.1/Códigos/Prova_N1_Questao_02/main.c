#include <stdio.h>

int main() {
  int vendas[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
  int num_v = 0, qtde_vendas = 0, salario = 0;

  printf("Digite a qtde de vendedores: ");
  scanf("%d", &num_v);
  printf("-------------------------\n");

  for (int i = 0; i < num_v; i++) {
    printf("Digite o total de vendas do vendedor %d: ", i + 1);
    scanf("%d", &qtde_vendas);
    salario = 200 + qtde_vendas * 0.09;
    if (salario >= 200 & salario <= 299)
      vendas[0]++;
    else if (salario >= 300 & salario <= 399)
      vendas[1]++;
    else if (salario >= 400 & salario <= 499)
      vendas[2]++;
    else if (salario >= 500 & salario <= 599)
      vendas[3]++;
    else if (salario >= 600 & salario <= 699)
      vendas[4]++;
    else if (salario >= 700 & salario <= 799)
      vendas[5]++;
    else if (salario >= 800 & salario <= 899)
      vendas[6]++;
    else if (salario >= 900 & salario <= 999)
      vendas[7]++;
    else
      vendas[8]++;
  }  // Fim for(int i=0; i<num_v; i++)

  // Imprimir resultado
  printf("Quantidade de salario: \n");
  printf("Faixa:\t200-299\t300-399\t");
  printf("400-499\t500-599\t600-699\t");
  printf("700-799\t800-899\t900-999\t1000 ou mais\n\t\t");
  for (int i = 0; i < 9; i++) printf("%d\t", vendas[i]);

  return 0;
}  // Fim funcao main()
