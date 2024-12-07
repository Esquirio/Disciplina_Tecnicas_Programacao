#include <ctype.h>
#include <stdio.h>

int main() {
  char jogador_01 = "a", jogador_02 = "a";
  int ponto_jog_01 = 0, ponto_jog_02 = 0;

  printf("\t\t\tJokenpo\n");
  printf("Escolha r-rock, p-paper, s-scissor\n\n");
  printf("\tJogador 01\t\tJogador 02\n");

  for (int i = 0;; i++) {
    printf("Escolha %d-Jog_01: ", i + 1);
    jogador_01 = tolower(getche());
    printf("\t|\tEscolha %d-Jog_02: ", i + 1);
    jogador_02 = tolower(getche());
    putchar('\n');
    if (jogador_01 == 'r' & jogador_02 == 't')
      ponto_jog_01++;
    else if (jogador_01 == 's' & jogador_02 == 'p')
      ponto_jog_01++;
    else if (jogador_01 == 'p' & jogador_02 == 'r')
      ponto_jog_01++;
    else if (jogador_01 == 'r' & jogador_02 == 'p')
      ponto_jog_02++;
    else if (jogador_01 == 'p' & jogador_02 == 's')
      ponto_jog_02++;
    else if (jogador_01 == 's' & jogador_02 == 'r')
      ponto_jog_02++;

    if (ponto_jog_01 == 2 || ponto_jog_02 == 2) {
      if (ponto_jog_01 == 2)
        printf("Jogador 01 - Venceu");
      else
        printf("Jogador 02 - Venceu");
      break;
    }  // Fim if (ponto_jog_01 == 2 || ponto_jog_02 == 2)
  }  // Fim do for(int i=0; i<3; i++)
  printf("\n\n");
  return 0;
}  // Fim da funcao main()
