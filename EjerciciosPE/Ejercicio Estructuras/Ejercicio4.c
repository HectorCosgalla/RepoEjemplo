#include "stdio.h"
#include "stdlib.h"
#include "conio.h"
#define MAX 10

//REALIZADO POR: Hector Cosgalla

struct temperatura {
  float min;
  float max;
};

/********** PROTOTIPO DE FUNCIONES **********/
void gradosCaF(struct temperatura temps[], int);

int main(){
  /********** DECLARACION DE VARIABLES **********/
  struct temperatura temps[MAX];
  srand(time(NULL));

  /********** ENTRADAS **********/
  for (int i = 0; i < MAX; i++) {
    temps[i].max = rand() % 41;
    printf("La temperatura maxima %d en %cc es: %.0f\n", i+1, 248,temps[i].max);
    temps[i].min = rand() % 41;
    printf("La temperatura minima %d en %cc es: %.0f\n", i+1, 248,temps[i].min);
    printf("\n");
  }

  /********** PROCESOS **********/
  for (int i = 0; i < MAX; i++) {
    gradosCaF(temps, i);
  }
  /********** SALIDAS **********/

  return 0;
}

void gradosCaF(struct temperatura temps[], int i) {
  float gradF = 0;
  gradF = (temps[i].max*9/5) + 32;
  printf("La temperatura maxima %d en %cf es: %.1f\n", i+1, 248, gradF);
  gradF = (temps[i].min*9/5) + 32;
  printf("La temperatura minima %d en %cf es: %.1f\n", i+1, 248, gradF);
  printf("\n");
}
