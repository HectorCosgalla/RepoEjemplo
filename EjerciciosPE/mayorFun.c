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
  int val;
  val = 0;

  if (*x > *z) {
    if (*x > *y) {
      val = *x;
      *x = *y;
      *y = val;
    } else {

    }
  } else {
    if (*x < *y) {
      val = *x;
      *x = *y;
      *y = *z;
      *z = val;
    }
  }

}
