#include <stdio.h>
#include <time.h>
// Prototipo da funcao 
void Converte(int hora, int minutos, int *minutosTotal);
// Funcao main()
int main() {
  time_t agora;         // Tipo de dados da biblio time.h
  struct tm *agora_tm;  // Struct para ler o horario
  int h, m, min_tot = 0;
  agora = time(NULL);
  agora_tm = localtime(&agora);
  h = agora_tm->tm_hour;  // Seleciona apenas as horas
  m = agora_tm->tm_min;   // Seleciona apenas os minutos

  Converte(h, m, &min_tot);
  printf("Horas: %d, Min: %d, Total min: %d\n", h, m, min_tot);
  return 0;
}  // Fim da Funcao main()
// Funcao Converte()
void Converte(int hora, int minutos, int *minutosTotal) {
  *minutosTotal = hora * 60 + minutos;
}  // Fim da funcao Converte()
