#include <stdio.h>
typedef struct {
  int dia;
  char mes[10];
  int ano;
} Data;

typedef struct {
  int pecas;
  float preco;
  Data diavenda;
} Venda;
int main() {
  Venda A = {20, 100.00, {7, "novembro", 2001}};

  printf("Pecas: %d\n", A.pecas);
  printf("Preco: %f\n", A.preco);
  printf("Data: %d de %s de %d\n", A.diavenda.dia, A.diavenda.mes,
         A.diavenda.ano);
  return 0;
}  // Fim da main()
