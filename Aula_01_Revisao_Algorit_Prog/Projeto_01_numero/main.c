#include <stdio.h> // Necessario para funcoes de IO

/* Funcão int main() */
int main()
{
    int num;   // Variavel do tipo inteiro
    printf("Digite um numero inteiro: "); // Interacao com o usuario
    scanf("%d", &num);                    // Recebe o valor do teclado
    printf("\n\n");                       // Duas quebras de linha
    printf("O numero digitado foi: %d\n", num); // Imprime o numero
    printf("O seu antecessor: %d\n", num-1);    // Imprime o seu antecessor
    printf("O seu sucessor: %d\n", num+1);      // Imprime o seu sucessor
    return 0;  // Retorno um valor interno
}//Fim int main()
