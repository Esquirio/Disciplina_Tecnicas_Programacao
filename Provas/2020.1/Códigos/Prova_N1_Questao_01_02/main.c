#include <stdio.h>
#include <stdlib.h>
#include<time.h>

const float TOTAL = 100.0;

typedef struct Roll_dice
{
    int val[11];
    int soma[11];
    float porcent[11];
}tRoll_dice;

int main()
{
    int dado_01 = 0, dado_02 = 0, soma = 0;
    tRoll_dice lanc = {{2,3,4,5,6,7,8,9,10,11,12},
                       {0,0,0,0,0,0,0,0, 0, 0, 0},
                       {0,0,0,0,0,0,0,0, 0, 0, 0}};

    //Use current time as seed for random generator
    srand(time(0));

    //Sorteio dos dados
    for(int i=0; i<(int)TOTAL; i++){
      dado_01 = (rand()%6)+1;
      dado_02 = (rand()%6)+1;
      soma = dado_01 + dado_02;
      lanc.soma[soma-2]++;
    }//Fim do for(int i=0; i<100; i++)

    //Cálculo de Porcentagens
    for(int col=0; col<11; col++)
        lanc.porcent[col] = lanc.soma[col]/TOTAL;

    //Impressão formatada
    printf("Somas sorteados: \n");
    for(int item=0; item<3; item++){
        if (item==0){
            printf("Soma:\t");
            for(int col=0; col<11; col++)
                printf("%d\t",lanc.val[col]);
            putchar('\n');
        }//Fim if (item==0)
        else if (item==1){
            printf("Qtdade:\t");
            for(int col=0; col<11; col++)
                printf("%d\t",lanc.soma[col]);
            putchar('\n');
        }//Fim if (item==1)
        else{
            printf("%%:\t");
            for(int col=0; col<11; col++)
                printf("%.2f\t",lanc.porcent[col]);
            putchar('\n');
        }//Fim else, que equivale ao (item==3)
    }//Fim do for(int lin=0; lin<100; lin++)
    return 0;
}//Fim da funcao main()
