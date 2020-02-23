#include "stdio.h"

/********** PROTOTIPO DE FUNCIONES **********/
void fecha1(int, int, int);
void fecha2(int, int, int);

int main(){
  /********** DECLARACION DE VARIABLES **********/
  int dia, mes, anno;
  dia = 0;
  mes = 0;
  anno = 0;

  /********** ENTRADAS **********/
  scanf("%d", &dia);
  scanf("%d", &mes);
  scanf("%d", &anno);

  /********** PROCESOS **********/
  /********** SALIDAS **********/
  fecha1(dia, mes, anno);
  fecha2(dia, mes, anno);

  return 0;
}

/********** FUNCIONES **********/
void fecha1(int dia, int mes,int anno) {
  if (dia < 10) {
    printf("0%d ", dia);
  } else {
    printf("%d ", dia);
  }
  if (mes < 10) {
    printf("/ 0%d /", mes);
  } else{
    printf("/ %d /", mes);
  }
  anno = anno % 100;
  printf(" %d\n", anno);
}

void fecha2(int dia, int mes,int anno) {
  if (dia < 10) {
    printf("0%d ", dia);
  } else {
    printf("%d ", dia);
  }
  switch (mes) {
    case 1:
      printf("/ Enero /");
      break;
    case 2:
      printf("/ Febrero /");
      break;
    case 3:
      printf("/ Marzo /");
      break;
    case 4:
      printf("/ Abril /");
      break;
    case 5:
      printf("/ Mayo /");
      break;
    case 6:
      printf("/ Junio /");
      break;
    case 7:
      printf("/ Julio /");
      break;
    case 8:
      printf("/ Agosto /");
      break;
    case 9:
      printf("/ Septiempre /");
      break;
    case 10:
      printf("/ Octubre /");
      break;
    case 11:
      printf("/ Noviembre /");
      break;
    case 12:
      printf("/ Diciembre /");
      break;
  }
  printf(" %d\n", anno);
}
