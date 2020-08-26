#include <stdio.h>  // Necess�rio para usar printf
#include <locale.h> // Necess�rio para usar setlocale

int main()
{
    int valor = 9;      // Variavel do tipo inteiro
    char letra = 'P';   // Variavel do tipo char
    float din = 124.32; // Variavel do tipo float
    setlocale(LC_ALL, "Portuguese");    //Configura a l�ngua portuguesa
    // Imprimindo as vari�veis
    printf("Imprimindo um valor inteiro: %i.\n", valor);
    printf("Imprimindo um valor decimal: %f.\n", din);
    printf("Imprimindo um valor literal: %c.\n", letra);
    printf("Imprimindo uma string (sequ�ncia de caracteres): %s", "Pit�goras.\n");
    return 0; //Retorna um valor inteiro
} //Fim da fun��o int main()
