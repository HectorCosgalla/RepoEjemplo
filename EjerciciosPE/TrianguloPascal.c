#include "stdio.h"

/********** PROTOTIPO DE FUNCIONES **********/
void Entradas(int *);
void Proceso(int *,int * ,int *);
void Salida();

int main(){
  /********** ENTRADAS **********/
  int n, uno, cero, medio;
  medio = 0;
  n = 0;
  Entradas(&n);
  /********** PROCESOS **********/
  /********** SALIDAS **********/
  for (int i = 1; i <= n; i++) {
    uno = 1;
    cero = 0;
    medio = uno + cero;
    for (int j = 1; j <= i; j++) {
      printf("%d ", medio);
      medio = medio + uno;
    }

    printf("\n");
  }
  return 0;
}

/********** FUNCIONES **********/
void Entradas(int *n){
  printf("Ingrese el limite:\n");
  scanf("%d", n);
}
