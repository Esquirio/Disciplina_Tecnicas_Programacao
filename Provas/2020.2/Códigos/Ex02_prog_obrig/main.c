// Joao Vitor Andrade de Araujo - RA: 21377112
// Murillo Monteiro Pedroso     - RA:21393496

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct txt {
  int id;
  char titulo[200];
  char texto[2000];
  int tamanho_titulo;
  int tamanho_texto;
  int letras_titulo[26];
  int letras_texto[26];
} tdiario;

int main() {
  // Inicialização de variáveis de controle e variáveis acumuladoras
  tdiario dados[50];
  dados[0].id = -1;
  int x = 0;
  int i = 0;
  int j = 0;
  int resposta = 0;
  int contador_dois = 0;
  int controle_minusculo = 97;
  int controle_maiusculo = 65;

  /*
      Upgrades realizados:
          - Menu de interação.
          - Usuário fazer busca de textos já feitos.
          - Contagem de caracteres.
          - Separação entre título e texto e contagem de caracteres separada
     entre eles com seus respectivos limites.
          - Não distinguir letras maiúsculas e minúsculas.
          - Uso de tecla especial para encerrar o texto, ou seja, o "enter" não
     encerra.
          - Verificação de opção errada do usuário.
  */

  printf("\nEmpresa do Malvado Doofenshmirtz!!!\n\n");
  do {
    resposta = 0;
    do  // Início do programa, pega a primeira opção do usuário, ou seja, define
        // o primeiro contato usuário x programa
    {
      resposta = 0;
      printf(
          "\n\n\t\tOla Dr. Doofenshmirtz!\n\t\tO que deseja fazer?\n\t\t 1 - "
          "Criar um novo plano\n\t\t 2 - Visualizar seus planos antigos\n\t\t "
          "3 - Sair\n");
      printf("Numero da opcao: ");
      fflush(stdin);
      scanf(" %i", &resposta);
      setbuf(stdin, NULL);

      if (resposta < 1 || resposta > 3) {
        printf("Dr. Doofenshmirtz, opcao invalida, digite novamente:\n");
      }
    } while (resposta < 1 ||
             resposta > 3);  // repete enquanto resposta for invalida

    switch (resposta) {
      case 1:

        dados[x].id = x;

        for (i = 0; i < 50;
             i++)  // inicializa os vetores do texto e demarca os espaços para
                   // que não haja interrupção na contagem
        {
          dados[x].titulo[i] = 0;
        }
        printf(
            "De um titulo para o seu plano.\nQuando desejar encerrar aperte "
            "'^' + espaco, por fim aperte enter para parar (Limite de 20 "
            "caracteres):\n");
        fflush(stdin);
        scanf(" %20[^^]s", &dados[x].titulo);
        setbuf(stdin, NULL);
        dados[x].tamanho_titulo =
            strlen(dados[x].titulo);  // mede o tamanho do texto
        printf("\n\tQuantidade de caracteres usados no titulo: %i/20\n\n",
               dados[x].tamanho_titulo);

        for (i = 0; i < 26;
             i++)  // inicializa todo o vetor para evitar lixo de memoria
        {
          dados[x].letras_titulo[i] = 0;  // zera cada letra
        }
        /*
            Nesse segundo bloco é basicamente como o bloco acima, há os mesmos
           funcionamentos porém, no entanto. Os limites de caracteres são
           maiores como pedido no exercício.
        */

        printf(
            "Digite seu texto. Quando desejar encerrar aperte '^' + espaco, "
            "por fim aperte enter para parar (Limite de 200 caracteres):\n");
        fflush(stdin);
        scanf(" %200[^^]s", &dados[x].texto);
        setbuf(stdin, NULL);
        dados[x].tamanho_texto =
            strlen(dados[x].texto);  // mede o tamanho do texto
        printf("\n\tQuantidade caracteres usados no texto: %i/200\n\n",
               dados[x].tamanho_texto);

        for (i = 0; i < 26;
             i++)  // inicializa todo o vetor para evitar lixo de memoria
        {
          dados[x].letras_texto[i] = 0;  // zera cada letra
        }

        for (j = 0; j < dados[x].tamanho_titulo;
             j++)  // for para percorrer cada caracter do texto
        {
          if (dados[x].titulo[j] == '\n') {
            dados[x].titulo[j] = ' ';
          }
          /* Nessas duas variáveis são armazenadas os valores da tabela
          ASCII, dessa forma há um início para os laços de repetições e
          checagem "saberem" o que está sendo implementado.*/
          controle_minusculo = 97;
          controle_maiusculo = 65;
          for (i = 0; i < 26; i++)  // for para comparar cada letra com todas as
                                    // letras do alfabeto
          {
            if (dados[x].titulo[j] == controle_minusculo ||
                dados[x].titulo[j] ==
                    controle_maiusculo)  // compara a letra com cada letra do
                                         // alfabeto
            {
              dados[x].letras_titulo[i]++;  // caso a letra corresponda ele soma
                                            // 1 no vetor de letras
            }
            controle_minusculo++;  // Vai pra prox letra minuscula
            controle_maiusculo++;  // Vai pra prox letra maiuscula
            /* No final as duas variáveis impressas de uma vez
            fazendo que não haja distinção de maiúsculas e minúsculas.*/
          }
        }

        for (j = 0; j < dados[x].tamanho_texto;
             j++)  // for para percorrer cada caracter do texto
        {
          if (dados[x].texto[j] == '\n') {
            dados[x].texto[j] = ' ';
          }
          /*
          Nessas duas variáveis são armazenadas os valores da tabela
          ASCII, dessa forma há um início para os laços de repetições e
          checagem "saberem" o que está sendo implementado.
          */
          controle_minusculo = 97;
          controle_maiusculo = 65;
          for (i = 0; i < 26; i++)  // for para comparar cada letra com todas as
                                    // letras do alfabeto
          {
            if (dados[x].texto[j] == controle_minusculo ||
                dados[x].texto[j] ==
                    controle_maiusculo)  // compara a letra com cada letra do
                                         // alfabeto
            {
              dados[x].letras_texto[i]++;  // caso a letra corresponda ele soma
                                           // 1 no vetor de letras
            }
            controle_minusculo++;  // Vai pra prox letra minuscula
            controle_maiusculo++;  // Vai pra prox letra maiuscula
            /*
             No final as duas variáveis impressas de uma vez
            fazendo que não haja distinção de maiúsculas e minúsculas.
            */
          }
        }

        controle_maiusculo = 65;
        /*
        Nos laços de repetições abaixo são para que haja uma contagem de vetor e
        checagem de quantas vezes a letra digitada passou para que haja um total
        e seja mostrado ao usuário.
        */
        printf("Letras:           ");
        for (i = 0; i < 26; i++) {
          printf("   %c ", controle_maiusculo);
          controle_maiusculo++;
        }
        printf("\n\n");
        printf("N vezes no titulo: ");

        for (i = 0; i < 26; i++) {
          printf("  %i  ", dados[x].letras_titulo[i]);
        }
        printf("\n");
        printf("N vezes no texto:  ");

        for (i = 0; i < 26; i++) {
          printf("  %i  ", dados[x].letras_texto[i]);
        }
        x++;
        break;

      case 2:
        if (dados[0].id < 0)  // verifica se existem funcionarios cadastrados
        {
          printf("\nAinda nao existem planos malignos Dr. Doofenshmirtz!\n");
        } else {
          printf("   ID\t          Titulo\t          Descricao\n");
          for (i = 0; i < x; i++) {
            printf("\n   %i", dados[i].id);
            printf("        %s  ", dados[i].titulo);

            for (j = 0; j < dados[i].tamanho_texto; j++) {
              if (j == 30 || j == 60 || j == 90 || j == 120 || j == 150 ||
                  j == 180) {
                printf("\n\n\t\t\t\t");
              }
              printf("%c", dados[i].texto[j]);
              if (j == dados[i].tamanho_texto - 1) {
                printf("     (%i/200)", dados[i].tamanho_texto);
              }
            }
            printf(
                "\n------------------------------------------------------------"
                "--");
          }
        }
        break;
      case 3:
        printf("\nVoce saiu\n");
        printf("Boa sorte sr. Malvado Doofenshmirtz!");
        break;

      default:
        break;
    }

  } while (resposta != 3);

  return 0;
}
