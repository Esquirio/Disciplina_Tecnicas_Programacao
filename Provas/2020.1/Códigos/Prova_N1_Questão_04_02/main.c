#include <stdio.h>

int main() {
  char texto[200], alfabeto[26];
  int tam = 0, cont = 0;
  printf("Escreva seu texto:\n");
  scanf("%[^\n]", texto);

  for (int i = 0; i < 26; i++) alfabeto[i] = 0;

  while (texto[cont] != '\0') {
    if (texto[cont] >= 'A' && texto[cont] <= 'z')
      alfabeto[(texto[cont] | ' ') - 'a']++;
    cont++;
  }  // Fim do while(texto[cont]!='\0')
  // Imprimi as ocorrências
  printf("Ocorrencias:\n");
  printf("Letras:\t\t");
  for (char i = 'a'; i <= 'z'; i++) printf(" %2c", i);

  printf("\nN Vezes:\t");
  for (int i = 0; i < 26; i++) printf(" %2d", alfabeto[i]);

  putchar('\n');
  return 0;
}  // Fim da funcao main()
