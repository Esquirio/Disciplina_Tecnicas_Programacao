#include <stdio.h>  //Funcoes de I/O
/* Funcao main() */
int main() {
  float num = 0.0, *pt;
  pt = &num;
  printf("Digite um num real: ");
  scanf("%f", pt);  // Le o float pelo ponteiro
  printf("\n\nAntes do incremento:\n");
  printf("Conteudo da variavel: %.2f %.2f \n", num, *pt);
  printf("Endereco da variavel: %d %d \n\n", &num, pt);
  system("PAUSE");
  pt++;
  printf("\n\nDepois do incremento:\n");
  printf("Conteudo da variavel: %.2f %.2f \n", num, *pt);
  printf("Endereco da variavel: %d %d \n\n", &num, pt);
  system("PAUSE");
  pt--;
  printf("\n\nDepois do decremento:\n");
  printf("Conteudo da variavel: %.2f %.2f \n", num, *pt);
  printf("Endereco da variavel: %d %d \n\n", &num, pt);
  return 0;
}  // Fim da funcao main()
