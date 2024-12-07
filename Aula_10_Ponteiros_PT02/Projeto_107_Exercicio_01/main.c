#include <stdio.h>
#include <string.h>

#define TAM 10
// Leia 10 strings de nomes de pessoas e armazene-os em um vetor de ponteiros.
// Em seguida, mostre todos os nomes

int main() {
  char nome[TAM];
  char *pont_vetor[TAM];
  for (int i = 0; i < TAM; i++) {
    printf("Digite um nome: ");
    scanf("%s", nome);
    strcat(nome, "\0");
    pont_vetor[i] = nome;
  }  // Fim do for(int i=0; i<TAM; i++)

  printf("\n\nNomes digitados\n\n");
  for (int i = 0; i < TAM; i++) {
    printf("%s\n", pont_vetor[i]);
  }  // Fim do for(int i=0; i<TAM; i++)
  return 0;
}  // Fim da funcao main()
