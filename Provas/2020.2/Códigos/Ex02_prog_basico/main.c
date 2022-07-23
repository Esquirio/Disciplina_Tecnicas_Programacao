#include <stdio.h>
#include <stdlib.h>
int main(){
    char texto[200], alfabeto_mini[26], alfabeto_maiu[26];
    int cont = 0;
    printf("Escreva seu texto:\n");
    gets(texto);

    for(int i=0; i<26; i++){
      alfabeto_mini[i] = 0;
      alfabeto_maiu[i] = 0;
    }

    while(texto[cont] != '\0'){
      if(texto[cont] >= 'A' && texto[cont] <= 'Z')
        alfabeto_maiu[(texto[cont] | ' ') -'a']++;
      else if(texto[cont] >= 'a' && texto[cont] <= 'z')
        alfabeto_mini[(texto[cont] | ' ') -'a']++;
      cont++;
    }//Fim do while(texto[cont]!='\0')

    //Imprimi as ocorrências
    printf("Ocorrencias:\n");
    printf("Letras Maiusculas:\t\t");
    for(char i='A'; i<='Z'; i++)
      printf(" %2c", i);

    printf("\nN Vezes:\t\t\t");
    for(int i=0; i<26; i++)
      printf(" %2d", alfabeto_maiu[i]);

    printf("\n\nLetras Minusculas:\t\t");
    for(char i='a'; i<='z'; i++)
      printf(" %2c", i);

    printf("\nN Vezes:\t\t\t");
    for(int i=0; i<26; i++)
      printf(" %2d", alfabeto_mini[i]);

    putchar('\n');
    return 0;
}//Fim da funcao main()

