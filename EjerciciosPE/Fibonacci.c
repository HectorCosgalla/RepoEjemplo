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
  Fibonacci(n);
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

void Fibonacci(int n) {
  int primer, segundo, tercero;
  primer = 0;
  segundo = 1;
  tercero = 0;
  for (int i = 0; i < n; i++) {
    printf("%d, ", primer);
    tercero = primer + segundo;
    primer = segundo;
    segundo = tercero;
  }
}
