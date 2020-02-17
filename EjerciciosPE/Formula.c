#include "stdio.h"
/****************************************************************
* Autor: Hector A. V. Cosgalla                                        *
* Entradas:                                       *
* Salidas:            *
* Procedimiento: *
*****************************************************************/

/*************** DECLARACION DE FUNCIONES ***************/
void tabla(float *, float *, float *, float *, float *, float *, int *);

int main() {
  /*************** ENTRADAS ***************/
  float x0, x1, xn, fx0, fx1, Er;
  int i;
  x0 = 4;
  x1 = 3;
  xn = 0;
  fx0 = 0;
  fx1 = 0;
  Er = 0;
  i = 0;

  /*************** PROCESOS ***************/
  /*************** SALIDAS ***************/
  tabla(&x0, &x1, &xn, &fx0, &fx1, &Er, &i);
}

/*************** FUNCIONES ***************/
void tabla(float *x0, float *x1, float *xn, float *fx0, float *fx1, float *Er, int *i) {
  printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,203,205,205,205,205,205,205,205,205,205,205,203,205,205,205,205,205,205,205,205,205,205,203,205,205,205,205,205,205,205,205,205,205,203,205,205,205,205,205,205,205,205,205,205,187);
  printf("%c i %c    xi    %c   x1+1   %c   xi+2   %c    er    %c\n",186,186,186,186,186,186);
  printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",204,205,205,205,206,205,205,205,205,205,205,205,205,205,205,206,205,205,205,205,205,205,205,205,205,205,206,205,205,205,205,205,205,205,205,205,205,206,205,205,205,205,205,205,205,205,205,205,185);
  do {
    *fx0 = (*x0 * *x0) - 4;
    *fx1 = (*x1 * *x1) - 4;
    *xn = *x1 - ((*x1 - *x0)/(*fx1 - *fx0)) * *fx1;
    *Er = ((*x1 - *xn)/ *xn) * 100;
    if (*Er >= 10) {
      printf("%c %d %c  %1.4f  %c  %1.4f  %c  %1.4f  %c  %1.3f  %c\n",186, *i ,186, *x0 ,186, *x1 ,186, *xn ,186, *Er ,186);
    } else  {
      printf("%c %d %c  %1.4f  %c  %1.4f  %c  %1.4f  %c  %1.4f  %c\n",186, *i ,186, *x0 ,186, *x1 ,186, *xn ,186, *Er ,186);
    }
    *x0 = *x1;
    *x1 = *xn;
    *i = *i +1;
  } while(*Er >= .01);
  printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,202,205,205,205,205,205,205,205,205,205,205,202,205,205,205,205,205,205,205,205,205,205,202,205,205,205,205,205,205,205,205,205,205,202,205,205,205,205,205,205,205,205,205,205,188);

}