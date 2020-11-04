#include <stdio.h>
//Prototipo da funcao
int Soma(int num);

int main(){
    int n, sum;           //Declara vari�vel
    printf("\nDigite um inteiro positivo: ");
    scanf("%d", &n); //L� valor inteiro
    //Chamada da fun��o recursiva
    sum = Soma(n);
    printf("A soma dos %d primeiros numeros eh: %d\n", n, sum);
    return 0;
}//Fim int main()

int Soma(int num){
    int result = 0;
    if(num == 1){   //Ponto de parada - caso base
        result = 1;
        return result;  //Retorna valor
    }//Fim do if()
    else{ //Cria nova inst�ncia
        result = num + Soma(num-1);
        return (result); //Retorna valor
    }//Fim do else
}//Fim int soma(int n)

