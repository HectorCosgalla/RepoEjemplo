#include "stdio.h"

/********** PROTOTIPO DE FUNCIONES **********/
int coeficiente(int, int);
int factorial(int);

int main(){
  /********** DECLARACION DE VARIABLES **********/
  int m, n, coef;
  m = 0;
  n = 0;
  coef = 0;

  /********** ENTRADAS **********/
  scanf("%d", &m);
  scanf("%d", &n);
  /********** PROCESOS **********/
  coef = coeficiente(m, n);
  /********** SALIDAS **********/
  printf("%d", coef);
  return 0;
}

/********** FUNCIONES **********/
int coeficiente(int a, int b) {
  int den, num, coefi;
  den = 0;
  num = 0;
  coefi = 0;
  den = factorial(a);
  num = factorial(b);
  num = num * factorial( a-b );
  coefi = den / num;
  return coefi;
}

int factorial(int c) {
  int fact;
  fact = 1;
  for (int i = 1; i <= c; i++) {
    fact = fact * i;
  }
  return fact;
}
