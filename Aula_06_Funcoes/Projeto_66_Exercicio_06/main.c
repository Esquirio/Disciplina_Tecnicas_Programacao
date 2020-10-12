#include <stdio.h>
//Prototipo da funcao
int Menor(int n1, int n2);
//Funcao int main()
int main(){
    int num1 = 0, num2 = 0, result = 0;
    printf("Digite um numero: ");
    scanf("%d", &num1);
    printf("Digite outro numero: ");
    scanf("%d", &num2);
    result = Menor(num1, num2);
    printf("O menor numero entre %d e %d eh %.2d\n\n", num1, num2, result);
    return 0;
}//Fim da funcao main()
//Funcao int Menor()
int Menor(int n1, int n2){
    int aux = n1;
    if(n1 > n2)
        aux = n2;
    else if (n1 < n2)
        aux = n1;
    else
        printf("Numeros iguais.\n");
    return aux;
}//Fim da funcao Menor()


