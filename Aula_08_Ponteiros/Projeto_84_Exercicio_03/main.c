#include <stdio.h>  //Funcoes de I/O
/* Funcao main() */
int main() {
  // Declara variaveis e ponteiros
  int num_01 = 0, num_02 = 0, *pt_01, *pt_02;
  // Incializa ponteiros
  pt_01 = &num_01;
  pt_02 = &num_02;
  printf("Digite dois numeros inteiros: ");
  scanf("%d%d", pt_01, pt_02);
  // Compara conteúdo dos ponteiros
  if (*pt_01 == *pt_02) {
    printf("Conteudos iguais!\n\n");
  }  // Fim do if(*pt_01 == *pt_02)
  else {
    printf("Conteudos diferentes!\n\n");
  }  // Fim do else
  printf("\nEndereco dos ponteiros (antes): %d %d \n", pt_01, pt_02);
  pt_02 = pt_01;  // Ponteiros apontando para o mesmo endereço
  printf("\nEndereco dos ponteiros (depois): %d %d \n\n", pt_01, pt_02);
  // Voltando aos valores de endereços anteriores
  pt_01 = &num_01;
  pt_02 = &num_02;
  *pt_01 = *pt_02;  // Igualando o conteudo das variaaveis
  if (*pt_01 == *pt_02) {
    printf("Conteudos iguais!\n\n");
  }  // Fim do if(*pt_01 == *pt_02)
  return 0;
}  // Fim da funcao main()
