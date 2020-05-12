#include "stdio.h"

//REALIZADO POR: Hector Cosgalla

struct comp {
  float pR;
  float pI;
};

/********** PROTOTIPO DE FUNCIONES **********/
void sumaComp(struct comp a, struct comp b, struct comp resul);
void restaComp(struct comp a, struct comp b, struct comp resul);
void multComp(struct comp a, struct comp b, struct comp resul);
void divComp(struct comp a, struct comp b, struct comp resul);

int main(){
  /********** DECLARACION DE VARIABLES **********/
  struct comp a, b, resul;

  /********** ENTRADAS **********/
  printf("Ingrese la parte real de Z1: ");
  scanf("%f", &a.pR);
  printf("Ingrese la parte imaginaria de Z1: ");
  scanf("%f", &a.pI);

  printf("Ingrese la parte real de Z2: ");
  scanf("%f", &b.pR);
  printf("Ingrese la parte imaginaria de Z2: ");
  scanf("%f", &b.pI);

  /********** PROCESOS **********/
  sumaComp(a, b, resul);
  restaComp(a, b, resul);
  multComp(a, b, resul);
  divComp(a, b, resul);

  /********** SALIDAS **********/

  return 0;
}

/********** FUNCIONES **********/
void sumaComp(struct comp a, struct comp b, struct comp resul) {
  resul.pR = a.pR + b.pR;
  resul.pI = a.pI + b.pI;
  if (resul.pI < 0) {
    resul.pI = resul.pI * -1;
    printf("\nLa suma es: %.1f - %.1fi\n", resul.pR, resul.pI);
  }else {
    printf("\nLa suma es: %.1f + %.1fi\n", resul.pR, resul.pI);
  }
}

void restaComp(struct comp a, struct comp b, struct comp resul) {
  resul.pR = a.pR - b.pR;
  resul.pI = a.pI - b.pI;
  if (resul.pI < 0) {
    resul.pI = resul.pI * -1;
    printf("\nLa resta es: %.1f - %.1fi\n", resul.pR, resul.pI);
  }else {
    printf("\nLa resta es: %.1f + %.1fi\n", resul.pR, resul.pI);
  }
}

void multComp(struct comp a, struct comp b, struct comp resul) {
  resul.pR = (a.pR * b.pR) - (a.pI * b.pI);
  resul.pI = (a.pR * b.pI) + (a.pI * b.pR);
  if (resul.pI < 0) {
    resul.pI = resul.pI * -1;
    printf("\nLa multiplicacion es: %.1f - %.1fi\n", resul.pR, resul.pI);
  }else {
    printf("\nLa multiplicacion es: %.1f + %.1fi\n", resul.pR, resul.pI);
  }
}

void divComp(struct comp a, struct comp b, struct comp resul) {
  int denom;
  denom = (b.pR * b.pR) + (b.pI * b.pI);
  resul.pR = ((a.pR * b.pR) + (a.pI * b.pI)) / denom;
  resul.pI = ((a.pI * b.pR) - (a.pR * b.pI)) / denom;

  if (resul.pI < 0) {
    resul.pI = resul.pI * -1;
    printf("\nLa division es: %.1f - %.1fi\n", resul.pR, resul.pI);
  }else {
    printf("\nLa division es: %.1f + %.1fi\n", resul.pR, resul.pI);
  }
}
