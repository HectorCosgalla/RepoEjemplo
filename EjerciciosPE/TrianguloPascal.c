#include "stdio.h"

/********** PROTOTIPO DE FUNCIONES **********/
void Entradas(int *);
void Proceso(int *,int * ,int *);
void Salida();

int main(){
  /********** ENTRADAS **********/
  int num1, num2, n;
  num1 = 1;
  num2 = 0;
  n = 0;
  Entradas(&n);
  /********** PROCESOS **********/
  Proceso(&n, &num1, &num2);
  /********** SALIDAS **********/
  return 0;
}

/********** FUNCIONES **********/
void Entradas(int *n){
  printf("Ingrese el limite:\n");
  scanf("%d", n);
}

void Proceso(int *n, int *num1, int *num2) {
  int NumMed;
  NumMed = 0;
  printf("\n");
  for (int i = 1; i <= *n; i++) {
    NumMed = *num1;
    for (int j = 1; j <= i; j++) {
      NumMed = *num1 + *num2;
      printf("%d ", NumMed);
    }
    *num1 = NumMed;
    printf("\n");
  }
}
