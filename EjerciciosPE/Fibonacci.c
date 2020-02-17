#include "stdio.h"

/********** PROTOTIPO DE FUNCIONES **********/
int Entradas();
void Fibonacci(int);

int main(){
  /********** DECLARACION DE VARIABLES **********/
  int n;
  n = 0;

  /********** ENTRADAS **********/
  n = Entradas();
  /********** PROCESOS **********/
  printf("%d\n", n );
  /********** SALIDAS **********/

  return 0;
}

/********** FUNCIONES **********/
int Entradas() {
  int x;
  x = 0;
  printf("Ingrese los numeros de Fibonacci que desee ver:\n");
  scanf("%d", &x);
  return x;
}
