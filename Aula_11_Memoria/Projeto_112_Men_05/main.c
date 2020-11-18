#include <stdio.h>
#include <stdlib.h>
int main()
{
    //declarando um ponteiro para inteiro
    int *pVetor;
    int i;
    //Alocando um vetor de 10 posicoes
    pVetor = (int *) calloc(10, sizeof(int));
    if(pVetor != NULL)
    {
        //imprimindo o vetor    //inicializado
        for(i=0; i<10; i++)
        {
            printf("\npVetor[%d] = %d", i,  *(pVetor+i));
        }
        //preenchendo os 10 elementos do vetor
        for(i=0; i<10; i++)
        {
            printf("\nDigite elemento %d do vetor:", i);
            scanf("%d", (pVetor+i));
        }
        //imprimindo o vetor
        for(i=0; i<10; i++)
        {
            printf("\npVetor[%d] = %d", i, *(pVetor+i));
        }
    }
    else
        printf("\n Erro: Nao foi possivel alocar memoria!!");
    return 0;
}
