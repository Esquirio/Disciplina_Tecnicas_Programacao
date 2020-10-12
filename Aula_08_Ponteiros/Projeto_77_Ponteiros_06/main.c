#include<stdio.h>
int main()
{
  int x = 4, y = 7;//Declara e inicializa variaveis
  int *px, *py;    //Declara ponteiros
  printf("x eh %d, y eh %d. \n", x, y);
  px = &x;         //Ponteiro px aponta para var x
  py = &y;         //Ponteiro py aponta para var y
  *px = *px + 10;  //Corresponde x = x + 10;
  *py += 2;        //Corresponde y +=2; -> y = y + 2;
  printf("x eh %d, y eh %d. \n", x, y);
  return 0;
}
