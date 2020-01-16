#include "stdio.h"
#include "conio.h"
#include "math.h"
int main() {
  int Num, Des, ContPar, Div, DivPar, Num2;
  Num = 0;
  Num2 = 0;
  Des = 0;
  ContPar = 0;
  Div = 10;
  DivPar = 2;
  printf("Ingrese un numero:\n");
  scanf("%d", &Num);
  Num2 = Num;
  do {
    Des = Num%Div;
    Num = (Num-Des)/Div;
    if (Des%DivPar == 0 ) {
      ContPar = ContPar + 1;
    }
  } while(Num > 0);

  printf("El numero %d tiene %d numero(s) par(es)\n", Num2, ContPar);

  return 0;
}
