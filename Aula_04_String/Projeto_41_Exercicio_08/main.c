#include <stdio.h>  // Fun��es de I/O
/* Fun��o main () */
int main(){
  //Declara strings
  char string_01[50], string_02[50];
  int n = 0, tam = 0, j = 0;
  printf("Digite uma string: ");
  gets(string_01); //L� a string
  while(string_01[tam]!='\0'){
    tam ++;
  }//Fim do while(string_01[tam]!='\0')
  // L� o n�mero de caracteres a ser copiado
  do{
    if(n>tam)
      printf("\nDigite um numero menor do que %d.\n", tam);
    printf("Qtos caracteres quer copiar? ");
    scanf("%d", &n);
  }while(n>tam);
  // Copia n caracteres
  for(j=0; j<n; j++)
    string_02[j]=string_01[j];
  string_02[j] = '\0'; // Coloca o fim da string
  //Imprime resultados
  printf("\nString 01: %s\n", string_01);
  printf("String 02: %s\n\n", string_02);
  return 0;
}//Fim da fun��o main()
