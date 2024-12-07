#include <stdio.h>

#include "converte_temp.h"

int main() {
  float temp, converte;
  char controle = 's', escolha;
  while (controle != 'n') {
    printf("Qual conversão deseja fazer?\n");
    printf("C: Celsius para Fahr\n");
    printf("F: Fahr para Celsius: ");
    scanf("%c", &escolha);
    fflush(stdin);
    escolha |= ' ';  // escolha = escolha | ' '

    if (escolha == 'c') {
      printf("Digite uma temperatura em celsius: ");
      scanf("%f", &temp);
      fflush(stdin);
      converte = Converte_Fahr(temp);
      printf("A temp %.2f Celsius eh %.2f em Fahr\n\n", temp, converte);
    }  // Fim do if()
    else {
      printf("Digite uma temperatura em fahr: ");
      scanf("%f", &temp);
      fflush(stdin);
      converte = Converte_Celsius(temp);
      printf("A temp %.2f Fahr eh %.2f em Celsius\n\n", temp, converte);
    }  // Fim do else

    printf("Deseja continuar? s-sim n-nao: ");
    scanf("%c", &controle);
    fflush(stdin);
    controle |= ' ';
  }  // Fim do while()

  return 0;
}  // Fim da funcao main()
