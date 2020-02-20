#include "stdio.h"

/********** PROTOTIPO DE FUNCIONES **********/
void mayor(int *, int *, int *);

int main(){
  /********** DECLARACION DE VARIABLES **********/
  int x, y, z;
  x = 0;
  y = 0;
  z = 0;
  /********** ENTRADAS **********/
  scanf("%d", &x);
  scanf("%d", &y);
  scanf("%d", &z);
  /********** PROCESOS **********/
  mayor(&x, &y, &z);
  /********** SALIDAS **********/
printf("%d  ||  %d  ||  %d\n", x, y, z);
  return 0;
}

/********** FUNCIONES **********/
void mayor(int *x, int *y, int *z) {
  int var;
  var = 0;
  while (*x < *y || *x < *z || *y < *z) {
    if (((*x < *y) && (*x > *z) && (*y > *z)) || ((*x < *y) && (*x < *z) && (*y < *z))) {
      var = *x;
      *x = *y;
      *y = var;
    } else {
      var = *x;
      *x = *y;
      *y = *z;
      *z = var;
    }
  }
}
