#include "stdio.h"

/********** PROTOTIPO DE FUNCIONES **********/
int factores(int);
void proceso(int);

int main(){
  /********** DECLARACION DE VARIABLES **********/
  int n;

  /********** ENTRADAS **********/
  scanf("%d",&n);
  /********** PROCESOS **********/
  proceso(n);
  /********** SALIDAS **********/

  return 0;
}

/********** FUNCIONES **********/
void proceso(int n) {
  int fact;
  fact = 0;
  while (n > 1) {
    fact = factores(n);
    n = n / fact;
    printf("%d, ", fact);
  }
}

int factores(int n) {
  int cont;
  cont = 2;
  while (n > 0) {
    if (n % cont == 0) {
      return cont;
    } else {
      cont++;
    }
  }
}
