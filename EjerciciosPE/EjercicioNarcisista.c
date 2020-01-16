#include "stdio.h"
#include "conio.h"
#include "math.h"
int main(int argc, char const *argv[]) {
  int Comp, Num, Cont, Narc, Div, Des, Des2;
	Comp = 0;
	Num = 0;
	Cont = 0;
	Narc = 0;
	Div = 10;
	Des = 0;
	Des2 = 0;
  printf("Ingrese un numero\n");
  scanf("%d", &Num);
  Des = Num;
  do {
    Narc = Num%Div;
    Num = (Num - Narc) / Div;
    Cont = Cont + 1;
  } while(Num > 0);
  Num = Des;
  Comp = Des;
  Des = 1;
  Narc = 0;
  do {
    Des2 = Num % Div;
    Num = (Num - Des2) / Div;
    for (int i = 1; i <= Cont ; i++) {
      Des = Des * Des2;
    }
    Narc = Narc + Des;
    Des = 1;
  } while(Num > 0);;
  if (Comp == Narc) {
    printf("El numero %d es narcisista\n", Comp );
  } else {
    printf("El numero %d es no narcisista\n", Comp );
  }
  return 0;
}
