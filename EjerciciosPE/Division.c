#include "stdio.h"
#include "conio.h"
int main() {
  int Num, Div, Resul;
  Num = 0;
  Div = 0;
  Resul = 0;
  printf("Esribe el numerador:\n");
  scanf("%d", &Num);
  printf("Escribe el denominador:\n");
  scanf("%d", &Div);
    if (Div == 0) {
      printf("No se puede dividir entre 0\n");
    } else {
    while (Num > Div) {
      Num = Num - Div;
      Resul = Resul + 1;
    }
    printf("El resultado es: %d \n", Resul );
  }

  return 0;
}
