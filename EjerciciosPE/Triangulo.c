#include "stdio.h"
/****************************************************************
* Autor: Hector A. V. Cosgalla                                        *
* Entradas: un numero "n"                                       *
* Salidas: Una piramide con los numeros del 1 hasta n           *
* Procedimiento: Se lee el numero n y posteriormente se van     *
* imprimiendo los numeros desde 1 hasta n y si n > 10 cuando    *
* el contador llegue a 10 el numero a imprimir se regresa a 0   *
*****************************************************************/

/*************** DECLARACION DE FUNCIONES ***************/
void Entradas(int *);
void Procesalida(int *, int *);
int main() {
  /*************** ENTRADAS ***************/
  int n, num;
  n = 0;
  num = 0;
  Entradas(&n);
  /*************** PROCESOS ***************/
  /*************** SALIDAS ***************/
  Procesalida(&n, &num);
  return 0;
}

/*************** FUNCIONES ***************/
void Entradas(int *n) {
  printf("Ingrese el valor de n:\n");
  scanf("%d",n);
  return;
}

void Procesalida(int *n, int *num) {
  for (int i = 0; i <= *n; i++) {
    *num = 0;
    for (int j = 0; j < i; j++) {
      *num = *num + 1;
      if (*num == 10) {
        *num = 0;
      }
      printf("%d", *num);

    }
    printf("\n");
  }

}
