#include "stdio.h"
#include "conio.h"

int main() {
  float y, x, n, Fact, Pot;
  y = 1;
  x = 0;
  n = 0;
  Fact = 1;
  Pot = 1;
  printf("Ingrese x:\n");
  scanf("%f", &x);
  printf("Ingrese n:\n");
  scanf("%f", &n);
  for (int i = 1; i <= n; i++) {
    Pot = Pot * x;
    Fact= Fact * i;
    y = y + (Pot / Fact);
    printf("(Pot) = %f (Fact) = %f (y) = %f \n", Pot, Fact, y);
  }
  printf("y = %f\n", y);

  return 0;
}
