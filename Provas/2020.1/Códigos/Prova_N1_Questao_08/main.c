#include <stdio.h>
#include <time.h>
#include <unistd.h>

// Prototipos das funcoes
void moveTartaruga(int *tartarugaPtr);
void moveLebre(int *lebrePtr);
void imprimePosicoesAtuais(int *snapperPtr, int *bunnyPtr);

int main() {
  int tartaruga = 1;  // Posicao atual da tartaruga
  int lebre = 1;      // Posicao atual da lebre
  int tempo = 0;      // Tempo decorrido durante a corrida
  srand(time(NULL));

  printf("NAS SUAS MARCAS, PREPARAR\n");
  printf("BANG !!!!\n");
  printf("E LA VAO ELES!!!!\n");

  // Loop para percorrer eventos
  while (tartaruga != 70 && lebre != 70) {
    moveTartaruga(&tartaruga);
    moveLebre(&lebre);
    imprimePosicoesAtuais(&tartaruga, &lebre);
    ++tempo;
  }  // Fim do while()

  // Determina o vencedor e imprime menssagem
  if (tartaruga >= lebre) {
    printf("\nTartaruga vence!!! Yeah!!!\n");
  }  // Fim do if()
  else {
    printf("Lebre vence. Yuch.\n");
  }  // Fim do else

  printf("TEMPO DECORRIDO = %d segundos\n\n", tempo);

  return 0;
}  // Fim da main()

// Progressp da tartaruga
void moveTartaruga(int *tartarugaPtr) {
  int x;  // Numero aleatorio

  x = rand() % 10 + 1;  // Gera um numero aleatorio de 1-10

  // Determina progresso
  if (x >= 1 && x <= 5) {  // Caminha rapidamente
    *tartarugaPtr += 3;
  }  // Fim do if
  else if (x == 6 || x == 7) {  // Escorrega
    *tartarugaPtr -= 6;
  }  // Fim do else if
  else {  // Caminha lentamente
    ++(*tartarugaPtr);
  }  // Fim do else

  // Checar limites
  if (*tartarugaPtr < 1) {
    *tartarugaPtr = 1;
  }  // Fim do if
  if (*tartarugaPtr > 70) {
    *tartarugaPtr = 70;
  }  // Fim do if

}  // Fim da fincao moveTartaruga

// Progesso da lebre
void moveLebre(int *lebrePtr) {
  int y;                // Numero aleatorio
  y = rand() % 10 + 1;  // Gera numero aleatorio de 1-10 */

  // Determina progresso
  if (y == 3 || y == 4) {  // Grande salto
    *lebrePtr += 9;
  }  // Fim do if
  else if (y == 5) {  // Escorrega bastante
    *lebrePtr -= 12;
  }  // Fim else if */
  else if (y >= 6 && y <= 8) {  // Escorrega pouco
    ++(*lebrePtr);
  }  // Fim else if */
  else if (y == 10) {  // Pequeno salto
    *lebrePtr -= 2;
  }  // Fim else if */

  // Checa limites
  if (*lebrePtr < 1) {
    *lebrePtr = 1;
  }  // Fim if

  if (*lebrePtr > 70) {
    *lebrePtr = 70;
  }  // Fim if

}  // Fim da guncao moveLebre

// Mostra a nova posicao
void imprimePosicoesAtuais(int *snapperPtr, int *bunnyPtr) {
  int count;  // contador

  // Loop através da corrida
  for (count = 1; count <= 70; count++)

    // Imprime o lider atual
    if (count == *snapperPtr && count == *bunnyPtr) {
      printf("OUCH!!!");
    }  // Fim if
    else if (count == *bunnyPtr) {
      printf("H");
    }  // Fim else if
    else if (count == *snapperPtr) {
      printf("T");
    }  // Fim else if
    else {
      printf(" ");
    }  // Fim else

  printf("\n");
  // sleep(1);
}  // Fim da funcao imprimePosicoesAtuais
