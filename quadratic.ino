#include "math.h"
//declaração das variaveis
double A = 1;
double B = -7;
double C = 10;
double Delta;
double x1;
double x2;
//-------------------------
void setup() {
  Serial.begin(19200);
  for (int i = 0; i <= 40; i++) {
    Serial.println(" ");
  }
  Serial.println("---------------------------------");
  Serial.println("------ WMJ RESOLVENDO EQUAÇÔES DO 2° GRAU-----------");
  Serial.println("--------------------------------");
  Serial.println("--------------------------------");
  Serial.println("-- Solução Encontrando para a eq. do 2° Grau");
  Serial.println("--------------------------------");
  calcula();
}
//--------------------
void calcula () {
  Delta = pow(B, 2) - 4 * A * C;
  if (Delta >= 0) {
    x1 = (-B + sqrt(Delta) / (2 * A));
    x2 = (-B - sqrt(Delta) / (2 * A));
    delay(2000);
    Serial.println(" ");
    Serial.println("---------------");
    Serial.println(" O valor de Delta é:");
    Serial.println(Delta);
    Serial.println("     x'= ");
    Serial.println(x1);
    Serial.println("    x'' = ");
    Serial.println(x2);
    Serial.println("   ----------------------");
  }
  else {
    Serial.println("------------------");
    Serial.println("*O valor de Delta é:");
    Serial.println(Delta);
    Serial.println("Não há raízes reais");
    Serial.println("Solução Vazia");
    Serial.println("--------------------");
}
}
void loop(){
  
}

