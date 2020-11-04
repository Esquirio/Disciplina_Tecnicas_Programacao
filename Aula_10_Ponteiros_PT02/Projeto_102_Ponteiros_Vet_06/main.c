#include <stdio.h>
//Função main()
int main (){
    float valor [2][4];
    float *pont;
    int count;
    pont = valor[0];
    for (count=0;count<8;count++){
        printf("Digite um numero real: ");
        scanf(" %f", pont);
        pont++;
    }//Fim do for()
    pont = valor[0];
    printf("A matriz digitada foi:\n");
    for (count=0;count<8;count++){
        printf("%.2f\t", *pont);
        pont++;
        if (count == 3 || count == 7)
            putchar('\n');
    }//Fim do for()
    return(0);
}//Fim do for()


