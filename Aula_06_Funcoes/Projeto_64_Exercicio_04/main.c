#include <stdio.h>
//Prototipo da funcao
float Calcula(float n1, float n2, char op);

int main(){
    float num1, num2, result;
    char oper;
    printf("Digite um numero: ");
    scanf("%f", &num1);
    printf("Digite outro numero: ");
    scanf("%f", &num2);
    printf("Digite a operacao: ");
    scanf(" %c", &oper);
    result = Calcula(num1, num2, oper);
    printf("Resultado de %.2f %c %.2f eh %.2f\n\n", num1, oper, num2, result);
    return 0;
}//Fim da funcao main()
//Funcao float calcula()
float Calcula(float n1, float n2, char op){
    float resultado;
    switch(op){
        case '+':
            resultado = n1+n2;
            break;
        case '-':
            resultado = n1-n2;
            break;
        case '*':
            resultado = n1*n2;
            break;
        case '/':
            resultado = n1/n2;
            break;
    }//Fim do swtich()
    return resultado;
}//Fim da funcao float calcula()

