#include <stdio.h>
#include <string.h>

typedef struct
{
    char nome_mes[10];
    char mes_abr[4];
    int dias;
    int num_mes;
}Mes;

int main()
{
    Mes meses[12];
    for(int i=0; i<12; i++){
        switch(i+1){
        case 1:
            strcpy(meses[i].nome_mes, "Janeiro");
            strcpy(meses[i].mes_abr, "Jan");
            meses[i].dias = 31;
            meses[i].num_mes = 1;
            break;
        case 2:
            strcpy(meses[i].nome_mes, "Fevereiro");
            strcpy(meses[i].mes_abr, "Fev");
            meses[i].dias = 28;
            meses[i].num_mes = 2;
            break;
        case 3:
            strcpy(meses[i].nome_mes, "Marco");
            strcpy(meses[i].mes_abr, "Mar");
            meses[i].dias = 31;
            meses[i].num_mes = 3;
            break;
        case 4:
            strcpy(meses[i].nome_mes, "Abril");
            strcpy(meses[i].mes_abr, "Abr");
            meses[i].dias = 30;
            meses[i].num_mes = 4;
            break;
        case 5:
            strcpy(meses[i].nome_mes, "Maio");
            strcpy(meses[i].mes_abr, "Mai");
            meses[i].dias = 31;
            meses[i].num_mes = 5;
            break;
        case 6:
            strcpy(meses[i].nome_mes, "Junho");
            strcpy(meses[i].mes_abr, "Jun");
            meses[i].dias = 30;
            meses[i].num_mes = 6;
            break;
        case 7:
            strcpy(meses[i].nome_mes, "Julho");
            strcpy(meses[i].mes_abr, "Jul");
            meses[i].dias = 31;
            meses[i].num_mes = 7;
            break;
        case 8:
            strcpy(meses[i].nome_mes, "Agosto");
            strcpy(meses[i].mes_abr, "Ago");
            meses[i].dias = 31;
            meses[i].num_mes = 8;
            break;
        case 9:
            strcpy(meses[i].nome_mes, "Setembro");
            strcpy(meses[i].mes_abr, "Set");
            meses[i].dias = 30;
            meses[i].num_mes = 9;
            break;
        case 10:
            strcpy(meses[i].nome_mes, "Outubro");
            strcpy(meses[i].mes_abr, "Out");
            meses[i].dias = 31;
            meses[i].num_mes = 10;
            break;
        case 11:
            strcpy(meses[i].nome_mes, "Novembro");
            strcpy(meses[i].mes_abr, "Nov");
            meses[i].dias = 30;
            meses[i].num_mes = 11;
            break;
        case 12:
            strcpy(meses[i].nome_mes, "Dezembro");
            strcpy(meses[i].mes_abr, "Dez");
            meses[i].dias = 31;
            meses[i].num_mes = 12;
            break;
        default:
            printf("Mes nao existe!\n");
            break;
        }//Fim do switch
    }//Fim do for

    printf("|\tNome do Mes\t|\tAbreviacao\t|\tDias\tNumero mes\t|\n");
    for(int i=0;i<12; i++){
        printf("|\t%8s\t", meses[i].nome_mes);
        printf("|\t%8s\t", meses[i].mes_abr);
        printf("|\t%d\t", meses[i].dias);
        printf("|\t%d\t|\n", meses[i].num_mes);
    }//Fim do for
    return 0;
}//Fim da funcao main()
