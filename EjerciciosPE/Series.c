#include <stdio.h>
#include "windows.h"

/*************** DECLARACION DE FUNCIONES ***************/
void menu(int *elec);
void entradas(float *n, float *x);
void ex(float *n, float *resul, float x);
void emenx(float *n, float *resul, float x);
void ln(float *n, float *resul, float x);
void log(float *n, float *resul, float x);
void salida(float);

int main() {
  /*************** DECLARACION DE VARIABLES ***************/
  float n, x, resul;
  int elec;
  elec = 0;
  x = 0;
  n = 0;
  resul = 0;

  /*************** INGRESO DE DATOS ***************/
  menu(&elec);
  entradas(&n, &x);
  system("cls");

  /*************** PROCESOS ***************/

  switch (elec) {
    case 1:
      printf("Seleccionaste: e^x\n");
      ex(&n, &resul, x);
      break;
    case 2:
      printf("Seleccionaste: e^-x\n");
      emenx(&n, &resul, x);
      break;
    case 3:
      printf("Seleccionaste: ln(x/x-1)\n");
      ln(&n, &resul, x);
      break;
    case 4:
      printf("Seleccionaste: log(1+x)\n");
      log(&n, &resul, x);
      break;
  }

  /*************** SALIDA ***************/
  salida(resul);

  return 0;
}

/*************** FUNCIONES ***************/
void menu(int *elec) {
  int n;
  n = 1;
  printf("****************************************\n");
  printf("*BIENVENIDOS A LA CALCULADORA DE SERIES*\n");
  printf("****************************************\n");
  printf("\n");
  printf("Por favor, seleccione una opci%cn\n", 162);
  printf("1.- e^x = 1 + x + x^(2)/2! + x^(3)/3! + ... + x^(n)/n!\n");
  printf("\n");
  printf("2.- e^-x = 1 - x^2 + x^(4)/2! - x^(6)/3! + x^(8)/4! ... %c x^(2n)/n!\n", 241);
  printf("\n");
  printf("3.- ln(x/x-1) = 1/x + 1/2x^2 + 1/3x^3 ... + 1/nx^n \n");
  printf("\n");
  printf("4.- log(1+x) = x/1 - x^(2)/2 + x^(3)/3 - x^(4)/4 + x^(5)/5 - ... %c x^(n)/n \n", 241);
  printf("\n");
  scanf("%d", elec );
  do {
    switch (*elec) {
      case 1:
        n = 0;
        break;
      case 2:
        n = 0;
        break;
      case 3:
        n = 0;
        break;
      case 4:
        n = 0;
        break;
      default:
        printf("ERROR: Escoja un numero valido\n");
        scanf("%d", elec);
    }
    if (n == 0) {
      break;
    }
  } while(1);
}

void entradas(float *n, float *x) {
  printf("\n");
  printf("Ingrese el limite de la serie(n):\n");
  scanf("%f", n);
  printf("Ingrese un numero x: \n");
  scanf("%f", x);
}

void ex(float *n, float *resul, float x) {
  float pot, fact;
  *resul = 1;
  pot = 1;
  fact = 1;
  for (float i = 1; i <= *n; i++) {
    pot = pot * x;
    fact = fact * i;
    *resul = *resul + (pot / fact);
  }
  return;
}

void emenx(float *n, float *resul, float x) {
  float pot, fact;
  *resul = 1;
  pot = 1;
  fact = 1;
  for (int i = 1; i <= *n; i++) {
    if (i % 2 == 0) {
      pot = pot * x * x;
      fact = fact * i;
      *resul = *resul + (pot / fact);
    } else {
      pot = pot * x * x;
      fact = fact * i;
      *resul = *resul - (pot / fact);
    }
  }
  return;
}

void ln(float *n, float *resul, float x) {
  float num, den;
  num = 1;
  den = 1;
  for (int i = 1; i <= *n; i++) {
    den = den * x;
    *resul = *resul + num / (i * den);
  }
}

void log(float *n, float *resul, float x) {
  float pot;
  pot = 1;
  for (int i = 1; i <= *n; i++) {
    pot = pot * x;
    if (i % 2 == 0) {
      *resul = *resul - pot / i;
    }else {
      *resul = *resul + pot / i;
    }
  }
}

void salida(float resul) {
  printf("\n");
  printf("Y el resultado de la serie es: %f\n", resul);
}
