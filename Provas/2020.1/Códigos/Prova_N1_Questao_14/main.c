#include <stdio.h>
#define LIN      2
#define COL    181
#define AUX  COL/2

int main()
{
    int temperatura[LIN][COL], latitude = 0, temp = 0;
    float media[2] = {0.0, 0.0}, cont[2] = {0.0, 0.0};
    char continuar = 's';

    for(int i=0; i<LIN; i++)
        for(int j=0; j<COL; j++)
            temperatura[i][j]=j-AUX;

    for(int j=0; j<COL; j++){
        printf("Digite uma latitude -90 a 90: ");
        scanf("%d", &latitude);
        printf("Digite uma temperatura: ");
        scanf("%d", &temp);
        for(int j=0; j<COL; j++)
            if(temperatura[0][j]==latitude)
              temperatura[1][j] = temp;
        fflush(stdin);
        printf("Continuar digitando? (s-sim n-nao): ");
        scanf("%c", &continuar);
        fflush(stdin);
        if (continuar=='n')
            break;
    }//Fim do for

    printf("Latitude\tTemperatura\n");
    for(int i=0; i<LIN; i+=2){
        for(int j=0; j<COL; j++){
            if(temperatura[i][j] != temperatura[i+1][j])
                printf("%3d\t\t\t%3d\n", temperatura[i][j], temperatura[i+1][j]);
            else
                printf("Sem dados!\n");
        }//Fim do for
        putchar('\n');
    }//Fim do for

    //Hemisfério norte
    for(int j =(COL/2); j>0; j--){
        if ((temperatura[1][-j+COL/2] > temperatura[1][j+COL/2]) && (temperatura[1][-j+COL/2] != -temperatura[1][j+COL/2]))
            printf("Lat. %d do Sul eh mais quente do que lat. %d do Norte!\n", temperatura[0][-j+COL/2], temperatura[0][j+COL/2]);

        else if ((temperatura[1][-j+COL/2] < temperatura[1][j+COL/2]) && (temperatura[1][-j+COL/2] != -temperatura[1][j+COL/2]))
            printf("Lat. %d do Norte eh mais quente do que lat. %d do Sul!\n", temperatura[0][j+COL/2], temperatura[0][-j+COL/2]);
    }//Fim do for()
    return 0;
}//Fim do main()
