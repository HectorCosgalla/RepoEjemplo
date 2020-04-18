#include "stdio.h"
#define MAX 50

/********** PROTOTIPO DE FUNCIONES **********/
void entradas(char cad1[], char cad2[], char *, int);
int compararCadenas(char cad1[], char cad2[]);
int encontrarCadena(char cad1[], char cad2[]);
int longitudCadena(char cad1[]);
void copiarCadenas(char cad1[], char cad2[]);
int encontrarCaracter(char cad[], char *car);

int main(){
  /********** DECLARACION DE VARIABLES **********/
  char cad1[MAX], cad2[MAX];
  char car;
  int opc, sol, i;

  /********** ENTRADAS **********/
  do {
    printf("1) Comparar dos cadenas\n");
    printf("2) Encontrar cadena dentro de otra\n");
    printf("3) Obtener la longitud de una cadena\n");
    printf("4) Copiar una cadena a otra\n");
    printf("5) Obtener la posicion de un caracter en una cadena\n");
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
    case 3:
      sol = longitudCadena(cad1);
    case 4:
      copiarCadenas(cad1, cad2);
    case 5:
      sol = encontrarCaracter(cad1, &car);
  }

  /********** SALIDAS **********/

  if (opc != 4 && opc != 10) {
    printf("\n%d\n", sol);
  }
  if (opc == 4) {
    i = 0;
    printf("\n");
    while (cad2[i] != '\0') {
      printf("%c", cad2[i]);
      i++;
    }
    printf("\n");
  }

  fflush(stdin);
  return 0;
}

/********** FUNCIONES **********/
//Funcion de entradas, dependiendo de la opcion previa lee las entradas
void entradas(char cad1[], char cad2[], char *car, int opc){
  if (opc == 2 || opc == 1) {
    printf("Ingresa la cadena 1:\n");
    fflush(stdin);
    gets(cad1);
    printf("Ingresa la cadena 2:\n");
    fflush(stdin);
    gets(cad2);
  }

  if (opc == 3 || opc == 4) {
    printf("Ingrese una cadena: \n");
    fflush(stdin);
    gets(cad1);
  }

  if (opc == 5) {
    printf("Ingrese una cadena: \n");
    fflush(stdin);
    gets(cad1);
    printf("Ingrese un caracter: \n");
    fflush(stdin);
    gets(car);
  }
}

//Funcion para comparar dos cadenas
int compararCadenas(char cad1[], char cad2[]){
  int i = 0, igual = 0;

  while (cad1[i] != '\0' || cad2[i] != '\0') {
    if (cad1[i] == cad2[i]) {
      igual++;
    }
    i++;
  }
  if (igual == i) {
    return 1;
  } else {
    return 0;
  }
}

//Funcion para encontrar una cadena dentro de otra
int encontrarCadena(char cad1[], char cad2[]){
  //Leo el tamaño de mi cadena principal
  int i = 0, j = 0, n = 0, iguales = 0;
  while (cad1[i] != '\0' ) {
    n++;
    i++;
  }
  //compruebo que se encuentre la cadena dentro de la otra
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

int longitudCadena(char cad1[]){
  int i = 0;
  while (cad1[i] != '\0') {
    i++;
  }
  return i;
}

void copiarCadenas(char cad1[], char cad2[]) {
  int i = 0;
  while (cad1[i] != '\0') {
    fflush(stdin);
    cad2[i] = cad1[i];
    i++;
  }
}

int encontrarCaracter(char cad1[], char *car) {
  int i = 0, pos = 0;
  while ( cad1[i] != '\0') {
    if (cad1[i] == *car) {
      pos = i;
    }
    i++;
  }
  return pos + 1;
}
