#include "converte_temp.h"

float Converte_Celsius(float fahr) {
  float c = (fahr - 32.00) * 5.0 / 9.0;
  return c;
}  // Fim da Converte_Celsius()

float Converte_Fahr(float cels) {
  float f = (9.0 * cels / 5.0) + 32.00;
  return f;
}  // Fim da Converte_Celsius()
