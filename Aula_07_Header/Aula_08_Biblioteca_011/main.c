#include <stdio.h>
#include "minha_biblioteca.h"
int main()
{
    int num1, num2, resultado;
    //Solicita os valores numericos
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    //Chamada da funcao
    resultado = soma(num1, num2);
    //Imprime resultado
    printf("A soma eh: %d.\n", resultado);

    //Chamada da funcao
    resultado = sub(num1, num2);
    //Imprime resultado
    printf("A subtracao eh: %d.\n", resultado);

    //Chamada da funcao
    resultado = mult(num1, num2);
    //Imprime resultado
    printf("A multiplicacao eh: %d.\n", resultado);

    //Chamada da funcao
    resultado = div(num1, num2);
    //Imprime resultado
    printf("A divisao inteira eh: %d.\n", resultado);

    return 0;
}//Fim funcao main()


