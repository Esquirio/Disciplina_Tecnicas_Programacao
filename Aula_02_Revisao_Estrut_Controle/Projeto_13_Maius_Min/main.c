#include <stdio.h> // Fun��es de I/O, etc.
/* Func�o: main() */
int main()
{
  char letra = 'A'; // Declara vari�vel
  while (letra>= 'A' && letra <= 'z'){
    if((letra >= 'A'&& letra <= 'Z') || (letra >= 'a' && letra <= 'z'))
      printf("%c ", letra);
    letra++;
  }// Fim do while (letra>= 'A' && letra <= 'z')
  return 0;
}// Fim da fun��o main()

/*
  printf("Letras maiusculas:\n");
  while(letra >= 'A' && letra <= 'Z'){
    printf("%c ", letra);
    letra++;
  }// while(letra >= 'A' && letra <= 'Z')
  letra = 'a';
  printf("\n\nLetras minusculas:\n");
  while(letra >= 'a' && letra <= 'z'){
    printf("%c ", letra);
    letra++;
  }// while(letra >= 'a' && letra <= 'z')
  printf("\n\n");
*/
