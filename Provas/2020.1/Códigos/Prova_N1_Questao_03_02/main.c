#include <stdio.h>

int main()
{
    char jogador_01 = 'a', jogador_02 = 'a', continua = 's';
    int ponto_jog_01 = 0, ponto_jog_02 = 0;

    while(continua=='s'){
        printf("\t\t\tJokenpo\n");
        printf("Escolha r-rock, p-paper, s-scissor\n\n");
        printf("\tJogador 01\t\tJogador 02\n");
        for(int i=0; ; i++){
            printf("Escolha %d-Jog_01: ", i+1);
            jogador_01 = getche();
            jogador_01 |= ' '; //Transforma em minuscula
            printf("\t|\tEscolha %d-Jog_02: ", i+1);
            jogador_02 = getche();
            jogador_02 |= ' '; //Transforma em minuscula
            putchar('\n');
            if(jogador_01 == 'r' & jogador_02 == 't')
                ponto_jog_01++;
            else if(jogador_01 == 's' & jogador_02 == 'p')
                ponto_jog_01++;
            else if(jogador_01 == 'p' & jogador_02 == 'r')
                ponto_jog_01++;
            else if(jogador_01 == 'r' & jogador_02 == 'p')
                ponto_jog_02++;
            else if(jogador_01 == 'p' & jogador_02 == 's')
                ponto_jog_02++;
            else if(jogador_01 == 's' & jogador_02 == 'r')
                ponto_jog_02++;

            if (ponto_jog_01 == 2 || ponto_jog_02 == 2){
                if(ponto_jog_01 == 2)
                    printf("Jogador 01 - Venceu");
                else
                    printf("Jogador 02 - Venceu");
                ponto_jog_01 = 0;
                ponto_jog_02 = 0;
                break;
            }//Fim if (ponto_jog_01 == 2 || ponto_jog_02 == 2)
        }//Fim do for(int i=0; i<3; i++)

        printf("\n\nQuer jogar mais? s-sim, n-nao: ");
        continua = (getchar() | ' ');
        fflush(stdin);
        printf("\n\n");
    }//Fim while()
    printf("Bye Bye");
    printf("\n\n");
    return 0;
}//Fim da funcao main()

