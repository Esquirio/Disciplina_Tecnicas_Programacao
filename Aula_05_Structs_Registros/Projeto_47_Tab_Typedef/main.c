#include <stdio.h> 
#define NUM 10
typedef struct Funcionario {
  int id;
  char nome[30];
} tFuncionario;
/* Função main() */
int main() {
  tFuncionario empresa[NUM];
  int i;
  for (i = 0; i < NUM; i++) {
    printf("\nDigite id do Funcionario: ");
    scanf("%d", &(empresa[i].id));
      fflush(stdin);
    printf("\nDigite o nome do Funcionario: ");
    gets(empresa[i].nome);
     
  }  // Fim do for 
  for (i = 0; i < NUM; i++)
    printf("Nome %s Id %d", empresa[i].nome, empresa[i].id);
    return 0;
}  // Fim da main()
