#include <stdio.h>

/*************** DECLARACION DE FUNCIONES ***************/
void entradas(float *, int *);
void ex(float , float *, int );
void potencia(float *, int );
void factorial(float *, int );

int main() {
  /*************** DECLARACION DE VARIABLES ***************/
  float n, resul;
  int x;
  x = 0;
  n = 0;
  resul = 1;

  /*************** INGRESO DE DATOS ***************/
  entradas(&n, &x);

  /*************** PROCESOS ***************/
  ex(n, &resul, x);

  /*************** SALIDA ***************/
  printf("El resultado de e^%d = %f \n", x, resul );

  return 0;
}

/*************** FUNCIONES ***************/
void entradas(float *n, int *x) {
  printf("ingrese un numero x:\n");
  scanf("%d", x);
  printf("ingrese el limite de la serie (n):\n");
  scanf("%f", n);
  return;
}

void ex(float n, float *resul, int x) {
  float pot, fact;
  pot = 1;
  fact = 1;
  for (int i = 1; i <= n; i++) {
    potencia(&pot, x);
    factorial(&fact, i);
    *resul = *resul + pot/fact;
  }
  return;
}

void potencia(float *pot, int x) {
  *pot = *pot * x ;
}

void factorial(float *fact, int i) {
  *fact = i * *fact;
}
