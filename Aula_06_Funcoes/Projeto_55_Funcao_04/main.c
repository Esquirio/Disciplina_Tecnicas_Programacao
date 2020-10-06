#include <stdio.h>

//Prototiopo da funcao
float converte_celsius(float fahr);

//Funcao main()
int main()
{
    float celsius = 0, fahrenheit = 0;
    printf("Digite a temperatura em graus Fahrenheit: ");
    scanf("%f", &fahrenheit);

    //Chamada da funcao
    celsius = converte_celsius(fahrenheit);

    printf("Temperatura em Celsius = %.2f\n", celsius);

    return 0;
}//Fim da funcao main()

//Funcao float converte_celsius(float fahr)
float converte_celsius(float fahr){
    float c;
    c = (fahr - 32.0)*5.0/9.0;
    return c;
}//Fim float converte_celsius(float fahr)

