#include <stdio.h>

/*************** DECLARACION DE FUNCIONES ***************/
void entradas(float *n, float *x);
void ex(float *n, float *resul, float x);
void potencia(float *pot, float *x);
void factorial(float *fact, int *i);
void salida(float, float);

int main() {
  /*************** DECLARACION DE VARIABLES ***************/
  float n, x, resul;
  x = 0;
  n = 0;
  resul = 1;

  /*************** INGRESO DE DATOS ***************/
  entradas(&n, &x);

  /*************** PROCESOS ***************/
  ex(&n, &resul, x);

  /*************** SALIDA ***************/
  salida(resul, x);

  return 0;
}

/*************** FUNCIONES ***************/
void entradas(float *n, float *x) {
  printf("ingrese un numero x:\n");
  scanf("%f", x);
  printf("ingrese el limite de la serie (n):\n");
  scanf("%f", n);
  return;
}

void ex(float *n, float *resul, float x) {
  float pot, fact;
  pot = 1;
  fact = 1;
  for (int i = 1; i <= *n; i++) {
    potencia(&pot, &x);
    factorial(&fact, &i);
    *resul = *resul + pot/fact;
  }
  return;
}

void salida(float resul, float x) {
  printf("El resultado de e^%1.0f = %f \n", x, resul );
}

void potencia(float *pot, float *x) {
  *pot = *pot * *x;
  return;
}

void factorial(float *fact, int *i) {
  *fact = *i * *fact;
}
