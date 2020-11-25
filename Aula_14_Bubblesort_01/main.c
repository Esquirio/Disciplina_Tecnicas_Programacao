#include<stdio.h>
//Protótipo da funcao
void trocar (int *px, int *py);
//Funcao main()
void main(){
    int x, y; //Variaveis locais
    //Le valor da primeira variavel
    printf("\nValor para x: ");
    scanf("%d",&x);
    //Le valor da segunda variavel
    printf("\nValor para y: ");
    scanf("%d",&y);
    //Mostrando os conteudos de iniciais de x e y
    printf("\nX = %d e Y = %d\n", x, y);
    //Realizando a troca dos dois valores
    printf("\nTrocando...\n");
    trocar (&x, &y);
    //Imprimindo os valores trocados
    printf("\nX = %d e Y = %d\n", x, y);
}//Fim void main())
//Funcao void troca()
void trocar (int *px, int *py){
    int aux = *px; //Ponteiro auxiliar p/ realizar a troca
    *px = *py;     //Troca o conteúdo de x por y
    *py = aux;     //Atualiza o valor de y pelo x antigo
}//Fim void trocar ()


