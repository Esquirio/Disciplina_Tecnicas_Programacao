#include <stdio.h>
#define TAM 100
//Prototipo da funcao 
void Soma (int vet[], int tam, int *ret);
//Funcao main()
int main(){
    int v[TAM], tamanho = 0, soma = 0;
    char controle = 's';
    while(controle!='n'){
        printf("Digite um numero: ");
        scanf("%d", &v[tamanho]);
        tamanho++;
        printf("Continua? s-sim n-nao\n");
        scanf(" %c", &controle);
        fflush(stdin);
        controle |= ' ';
    }//Fim do while

    Soma(v, tamanho, &soma);
    printf("A soma dos elementos do vetor eh %d\n", soma);
    return 0;
}//Fim funcao main()
//Funcao Soma()
void Soma (int vet[], int tam, int *ret){
    for(int i=0; i<tam; i++)
        *ret += vet[i];
}//Fim funcao Soma()

