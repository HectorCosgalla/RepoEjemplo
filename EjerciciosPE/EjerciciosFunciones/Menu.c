#include "stdio.h"
#include "stdbool.h"
/********** PROTOTIPO DE FUNCIONES **********/
void ImPar();
void Perfecto();
int PerfectoAnid(int);
void Reverso();

int main(){
  /********** DECLARACION DE VARIABLES **********/
  int opc;
  bool band;
  band = false;

  /********** ENTRADAS **********/
  printf("1) Define si 10 numeros son pares o impares!\n" );
  printf("2) Los primeros tres numeros perfectos, los conoces?\n" );
  printf("3) El inverso de un numero, por ejemplo: 1234 -> 4321\n" );
  printf("Su selecci%cn:\n", 162);

  /********** PROCESOS **********/
  do {
    scanf("%d", &opc);
    /********** SALIDAS **********/
    switch (opc) {
      case 1:
        ImPar();
        band = true;
        break;
      case 2:
        Perfecto();
        band = true;
        break;
      case 3:
        Reverso();
        band = true;
        break;
      default:
      printf("ERROR: LA OPCION ES INCORRECTA\n");
      break;
    }
  } while(band == false);

  return 0;
}

/********** FUNCIONES **********/
void ImPar() {
  int num;
  for (int i = 0; i < 10; i++) {
    printf("Ingresa un numero:\n");
    scanf("%d", &num);
    if (num % 2 == 0) {
      printf("El numero \"%d\" es par.\n", num);
    }else {
      printf("El numero \"%d\" es impar.\n", num);
    }
  }
}

void Perfecto() {
  int Num, Perf, i;
  Perf = 0;
  Num = 1;
  i = 0;
  printf("Los primeros 3 numeros perfecto son: \n");
  do {
    Num = Num + 1;
    Perf = PerfectoAnid(Num);
    if (Perf == Num) {
      printf("%d, ", Num);
      i++;
    }
  } while(i < 3);
}

int PerfectoAnid(int Num) {
  int  Sum, Cont;
  Sum = 0;
  Cont = 1;
  do {
    if (Num%Cont == 0) {
      Sum = Sum + Cont;
    }
    Cont = Cont + 1;
  } while(Cont < Num);
  return Sum;
}

void Reverso() {
  int Num, Num2, Alm;
  Num = 0;
  Num2 = 0;
  Alm = 0;
  printf("Ingrese un numero:\n");
  scanf("%d", &Num);
  while (Num != 0) {
    Alm = Num % 10;
    Num2 = (Num2 + Alm)*10;
    Num = Num / 10;
  }
  Num2 = Num2 / 10;
  printf("El reverso del numero es: %d \n", Num2);
}
