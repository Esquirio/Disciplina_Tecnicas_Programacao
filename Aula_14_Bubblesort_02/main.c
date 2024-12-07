#include <stdio.h>
#define TAM 5
// Protótipo das funcoes
void BubbleSort(int vetor[], int tamanho);
void MostrarVetor(int vetor[]);
// Funcao main()
int main() {
  int vet[TAM] = {50, 30, 40, 20, 10};
  printf("Vetor original:\n");
  MostrarVetor(vet);

  printf("\nOrdenando o vetor...\n");
  BubbleSort(vet, TAM);

  printf("\nConteudo do vetor ja ordenado:\n");
  MostrarVetor(vet);
  return 0;
}  // Fim da funcao main()
// Funcao BubbleSort
void BubbleSort(int vetor[], int tamanho) {
  int auxiliar, i, j;
  for (i = 0; i < tamanho; i++) {
    for (j = 0; j < (tamanho - 1); j++) {
      if (vetor[j] > vetor[j + 1]) {
        auxiliar = vetor[j];
        vetor[j] = vetor[j + 1];
        vetor[j + 1] = auxiliar;
        MostrarVetor(vetor);
        system("PAUSE");
      }  // Fim if(vetor[j] > vetor[j+1])
    }  // Fim for(j = 0; j < (5 - 1); j++)
  }  // Fim for(i = 0; i < 5; i++)
}  // Fim void BubbleSort(int vetor[], int tamanho)
// Funcao MostrarVetor
void MostrarVetor(int vetor[]) {
  int i;
  printf("Organizacao atual do vetor:\n");
  for (i = 0; i < TAM; i++) printf("%d\t", vetor[i]);
}  // Fim void MostrarVetor(int vetor[])
