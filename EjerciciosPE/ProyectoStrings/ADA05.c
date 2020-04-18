#include "stdio.h"
#define MAX 50

/********** PROTOTIPO DE FUNCIONES **********/
void entradas(char cad1[], char cad2[], char *, int);
int compararCadenas(char cad1[], char cad2[]);
int encontrarCadena(char cad1[], char cad2[]);

int main(){
  /********** DECLARACION DE VARIABLES **********/
  char cad1[MAX], cad2[MAX];
  char car;
  int opc, sol;

  /********** ENTRADAS **********/
  do {
    printf("1) Comparar dos cadenas\n");
    scanf("%d", &opc);
    if (opc > 10 && opc < 1) {
      printf("ERROR: Opcion invalida\n");
    } else {
      entradas(cad1, cad2, &car, opc);
      break;
    }
  } while(1);
  /********** PROCESOS **********/
  switch (opc) {
    case 1:
      sol = compararCadenas(cad1, cad2);
      break;
    case 2:
      sol = encontrarCadena(cad1, cad2);
      break;
  }

  /********** SALIDAS **********/

  if (sol == 1) {
    printf("\n1\n");
  }else {
    printf("\n0\n");
  }

  fflush(stdin);
  return 0;
}

/********** FUNCIONES **********/
void entradas(char cad1[], char cad2[], char *car, int opc){
  if (opc <= 2) {
    printf("Ingresa la cadena 1:\n");
    fflush(stdin);
    gets(cad1);
    printf("Ingresa la cadena 2:\n");
    fflush(stdin);
    gets(cad2);
  }

}

int compararCadenas(char cad1[], char cad2[]){
  int i = 0, igual = 0, dist = 0;
  while (cad1[i] != '\0' || cad2[i] != '\0') {
    if (cad1[i] == cad2[i]) {
      igual++;
    } else {
      dist++;
    }
    i++;
  }
  if (igual == i) {
    return 1;
  } else {
    return 0;
  }
}


int encontrarCadena(char cad1[], char cad2[]){
  int i = 0, j = 0, n = 0, iguales = 0;
  while (cad1[i] != '\0' ) {
    printf("%c ", cad1[i]);
    n++;
    i++;
    printf("%d\n", n);
  }
  printf("%d\n", n);
  i = 0;
  do {
    while (cad1[i] == cad2[j] && cad1[i] != '\0') {
      i++;
      j++;
      iguales++;
    }
    j++;
  }while (cad2[j] != '\0');

  if (n == iguales) {
    return 1;
  } else {
    return 0;
  }
}
