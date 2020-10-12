#include <stdio.h>
//Prototipo da funcao
float Desconto(float valor, float desc);

int main()
{
    float preco = 0.0, descont = 0.0;
    printf("Digite o preço do produto: ");
    scanf("%f", &preco);
    printf("Digite o desconto: ");
    scanf("%f", &descont);

    printf("\nPreco final eh: R$%.2f\n", Desconto(preco, descont));
    return 0;
}//Fim da Funcao main()

float Desconto(float valor, float desc){
    if (desc > 1)
        return valor*(100-desc)/100.0;
    else
        return valor*(1-desc);
}//Fim da funcao float Desconto()
