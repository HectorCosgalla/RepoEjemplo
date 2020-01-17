#include "stdio.h"
#include "conio.h"
int main() {
  int Num, Sum, Cont;
  Num = 0;
  Sum = 0;
  Cont = 1;
  printf("Ingrese un numero (De preferencia perfecto):\n");
  scanf("%d", &Num);
  do {
    if (Num%Cont == 0) {
      Sum = Sum + Cont;
    }
    Cont = Cont + 1;
  } while(Cont < Num);

  if (Sum == Num) {
    printf("El numero %d es perfecto\n", Num);
  } else {
    printf("El numero %d no es perfecto\n", Num);
  }

}
