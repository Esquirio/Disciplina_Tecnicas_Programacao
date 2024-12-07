#include <stdio.h>

int main() {
  int dia = 0, mes = 0, ano = 0, bissexto = 0;

  while (ano < 1900 || ano > 2100) {
    printf("Digite um ano: ");
    scanf("%d", &ano);
  }  // Fim while(ano)

  while (mes < 1 || mes > 12) {
    printf("Digite um mes: ");
    scanf("%d", &mes);
  }  // Fim while(mes)

  bissexto = (!(ano % 4) && (ano % 100)) || !(ano % 400);

  if (bissexto) {
    if (mes == 2) {  // Mes Fev
      while (dia < 1 || dia > 29) {
        printf("Digite um dia: ");
        scanf("%d", &dia);
      }  // Fim while(dia)
    }  // Fim do if
    else if ((mes <= 7 && mes % 2) ||
             (mes > 7 &&
              !(mes % 2))) {  // Meses de Jan, Mar, Mai, Jul, Ago, Out, Dez
      while (dia < 1 || dia > 31) {
        printf("Digite um dia: ");
        scanf("%d", &dia);
      }  // Fim while(dia)
    }  // Fim di else if
    else {
      while (dia < 1 || dia > 30) {
        printf("Digite um dia: ");
        scanf("%d", &dia);
      }  // Fim while(dia)
    }  // Fim do else
  }  // Fim do if
  else {
    if (mes == 2) {
      while (dia < 1 || dia > 28) {
        printf("Digite um dia: ");
        scanf("%d", &dia);
      }  // Fim while(dia)
    }  // Fim do if
    else if ((mes <= 7 && mes % 2) ||
             (mes > 7 &&
              !(mes % 2))) {  // Meses de Jan, Mar, Mai, Jul, Ago, Out, Dez
      while (dia < 1 || dia > 31) {
        printf("Digite um dia: ");
        scanf("%d", &dia);
      }  // Fim while(dia)
    }  // Fim di else if
    else {
      while (dia < 1 || dia > 30) {
        printf("Digite um dia: ");
        scanf("%d", &dia);
      }  // Fim while(dia)
    }  // Fim do else
  }  // Fim do else
  printf("Data: %d/%d/%d\n", dia, mes, ano);
  return 0;
}  // Fim da main()
