#include "stdio.h"
#define MAX 50

/********** PROTOTIPO DE FUNCIONES **********/
void entradas(char cad1[], char cad2[], char *, int);
int compararCadenas(char cad1[], char cad2[]);
int encontrarCadena(char cad1[], char cad2[]);
int longitudCadena(char cad1[]);
void copiarCadenas(char cad1[], char cad2[]);
int encontrarCaracter(char cad[], char car);
int esDigito(char car);
int esMayuscula(char car);
int esVocal(char car);
int esConsanante(char car);
void convertirMayusculas(char cad1[]);

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
    printf("6) Verificar si un caracter es un digito\n");
    printf("7) Verificar si un caracter es una letra mayuscula\n");
    printf("8) Verificar si un caracter es una vocal\n");
    printf("9) Verificar si un caracter es una letra consonante\n");
    printf("10) CONVIERTE TODA UNA CADENA EN MAYUSCULAS\n\n");
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
      break;
    case 4:
      copiarCadenas(cad1, cad2);
      break;
    case 5:
      sol = encontrarCaracter(cad1, car);
      break;
    case 6:
      sol = esDigito(car);
      break;
    case 7:
      sol = esMayuscula(car);
      break;
    case 8:
      sol = esVocal(car);
      break;
    case 9:
      sol = esConsanante(car);
      break;
    case 10:
      convertirMayusculas(cad1);
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

  if (opc == 10) {
    i = 0;
    printf("\n");
    while (cad1[i] != '\0') {
      printf("%c", cad1[i]);
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

  if (opc == 3 || opc == 4 || opc == 10) {
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

  if (opc >= 6 && opc < 10) {
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

int encontrarCaracter(char cad1[], char car) {
  int i = 0;
  while ( cad1[i] != '\0') {
    if (cad1[i] == car) {
      return i + 1;
    }
    i++;
  }
  return 0;
}

int esDigito(char car) {
  if (car >= 48 && car <= 57) {
    return 1;
  }else{
    return 0;
  }
}

int esMayuscula(char car){
  if (car >= 65 && car <= 90) {
    return 1;
  } else {
    return 0;
  }
}

int esVocal(char car){
  if (car == 65 || car == 97 || car == 85 || car == 79 || car == 73 || car == 69 || car == 101 || car == 105 || car == 111 || car == 117){
    printf("%d\n", car);
    return 1;
  } else {
    printf("%d\n", car);
    return 0;
  }
}

int esConsanante(char car){
  if (((car > 65 && car <= 90) || (car > 97 && car <= 122)) && (car != 85 && car != 79 && car != 73 && car != 69 && car != 101 && car != 105 && car != 111 && car != 117)){
    return 1;
  } else {
    return 0;
  }
}

void convertirMayusculas(char cad1[]){
  int i = 0;
  while (cad1[i] != '\0') {
    if (cad1[i] >= 97 && cad1[i] <= 122) {
      cad1[i] = cad1[i] - 32;
    }
    i++;
  }
}
