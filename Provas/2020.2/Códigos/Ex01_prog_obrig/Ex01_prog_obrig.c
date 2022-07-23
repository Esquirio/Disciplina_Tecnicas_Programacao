#include <stdio.h>
#include <stdlib.h>
typedef struct func
{
  int id;
  char nome[50];
  char cpf[11];
  int dia;
  int mes;
  int ano;
} tFuncionario;

int validarCPF(char *cpf);
int validarData(int dd, int mm, int aa);

int main(){
  tFuncionario dados[5];
  int registro = 0, escolha = 0, letras = 1;
  char continua = 's';
  do{
    printf("Escolha uma opcao:\n");
    printf("1 - Cadastrar funcionarios\n");
    printf("2 - Listar funcionarios\n");
    printf("3 - Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &escolha);
    fflush(stdin);
    switch(escolha){
    case 1:
      do{
        system("cls");
        dados[registro].id = registro+1;
        //Leitura dos dados
        do{
          letras = 1;
          printf("\nDigite o nome do funcionario: ");
          gets(dados[registro].nome);
          fflush(stdin);
          for(int i = 0; (dados[registro].nome[i] != '\0' && i < 50); i++){
            if(!(dados[registro].nome[i] >= 'A' && dados[registro].nome[i] <= 'Z' ||
                 dados[registro].nome[i] >= 'a'&& dados[registro].nome[i] <= 'z' ||
                 dados[registro].nome[i] == ' '))
              letras = 0;
            if (i == 49)
              dados[registro].nome[i] = '\0';
          }
        }while(!letras);
        do{
          printf("\nDigite o CPF: ");
          scanf("%c%c%c%*c%c%c%c%*c%c%c%c%*c%c%c", &dados[registro].cpf[0],&dados[registro].cpf[1],&dados[registro].cpf[2],
                &dados[registro].cpf[3],&dados[registro].cpf[4],&dados[registro].cpf[5],&dados[registro].cpf[6],
                &dados[registro].cpf[7],&dados[registro].cpf[8],&dados[registro].cpf[9],&dados[registro].cpf[10]);
          fflush(stdin);
          if(!validarCPF(dados[registro].cpf))
            printf("CPF Invalido!\n\n");
        }while(!validarCPF(dados[registro].cpf));
        do{
          printf("\nDigite a data de nascimento: ");
          scanf("%i%*c%i%*c%i", &dados[registro].dia, &dados[registro].mes, &dados[registro].ano);
          fflush(stdin);
          if(!validarData(dados[registro].dia, dados[registro].mes, dados[registro].ano))
            printf("Data Invalida!!\n\n");
        }while(!validarData(dados[registro].dia, dados[registro].mes, dados[registro].ano));
        registro++;
        printf("\n\nDeseja cadastrar mais funcionarios? s-sim ou n-nao\n");
        scanf("%c", &continua);
        fflush(stdin);
      }while(continua == 's');
      system("cls");
      break;
    case 2:
      system("cls");
      if(registro != 0){
        printf("\nID\tNome\t\tCPF\t\tData de nascimento\n");
        for(int i = 0; i < registro; i++){
          //Imprime os dados
          printf("%d\t", dados[i].id);
          printf("%s\t", dados[i].nome);
          for(int j = 0; j <=10; j++){
            printf("%c", dados[i].cpf[j]);
            if(j==2||j==5)
              putchar('.');
            if(j==8)
              putchar('-');
          }
          printf("\t\t%i/%i/%i\n\n", dados[i].dia, dados[i].mes, dados[i].ano);
        }
      }
      else{
        printf("Nao existe registros!\n\n");
      }
      system("Pause");
      break;
    case 3:
      printf("\n\nObrigado a todos!!\n\n");
      break;
    }
  }while(escolha == 1 || escolha == 2);

  return 0;
}//Fim da main()

//Retorno: [1] - Se for válido | [0] - Se for inválido
int validarCPF(char *cpf)
{
    int i, j, digito1 = 0, digito2 = 0;
    if(strlen(cpf) != 11)
        return 0;
    else if((strcmp(cpf,"00000000000") == 0) || (strcmp(cpf,"11111111111") == 0) || (strcmp(cpf,"22222222222") == 0) ||
            (strcmp(cpf,"33333333333") == 0) || (strcmp(cpf,"44444444444") == 0) || (strcmp(cpf,"55555555555") == 0) ||
            (strcmp(cpf,"66666666666") == 0) || (strcmp(cpf,"77777777777") == 0) || (strcmp(cpf,"88888888888") == 0) ||
            (strcmp(cpf,"99999999999") == 0))
        return 0; ///se o CPF tiver todos os números iguais ele é inválido.
    else
    {
        ///digito 1---------------------------------------------------
        for(i = 0, j = 10; i < strlen(cpf)-2; i++, j--) ///multiplica os números de 10 a 2 e soma os resultados dentro de digito1
            digito1 += (cpf[i]-48) * j;
        digito1 %= 11;
        if(digito1 < 2)
            digito1 = 0;
        else
            digito1 = 11 - digito1;
        if((cpf[9]-48) != digito1)
            return 0; ///se o digito 1 não for o mesmo que o da validação CPF é inválido
        else
            ///digito 2--------------------------------------------------
        {
            for(i = 0, j = 11; i < strlen(cpf)-1; i++, j--) ///multiplica os números de 11 a 2 e soma os resultados dentro de digito2
                digito2 += (cpf[i]-48) * j;
            digito2 %= 11;
            if(digito2 < 2)
                digito2 = 0;
            else
                digito2 = 11 - digito2;
            if((cpf[10]-48) != digito2)
                return 0; ///se o digito 2 não for o mesmo que o da validação CPF é inválido
        }
    }
    return 1;
}

int validarData(int dd, int mm, int aa){
  if(mm < 1 || mm > 12){
    return 0;
  }
  else{
    if(mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12){
      if(dd < 1 || dd > 31){
        return 0;
      }
    }
    else if(mm == 2){
      if(dd < 1 || dd > 28){
        return 0;
      }
    }
    else{
      if(dd < 1 || dd > 30){
        return 0;
      }
    }
  }
  if(aa < 1950 || aa > 2002){
    return 0;
  }
  return 1;
}
