#include <stdio.h>
//Prototipo da funcao 
void Converte (int *hora, int *minutos, int minutosTotal);
//Funcao main()
int main(){
    int h, m, min_tot = 0;
    printf("Digite a qtdade de minutos: ");
    scanf("%d", &min_tot);
    Converte(&h, &m, min_tot);
    printf("Total min: %d, Horas: %d, Min: %d\n", min_tot, h, m);
    return 0;
}//Fim da Funcao main()
//Funcao Converte()
void Converte (int *hora, int *minutos, int minutosTotal){
    *hora = minutosTotal/60;
    *minutos = minutosTotal%60;
}//Fim da funcao Converte()

