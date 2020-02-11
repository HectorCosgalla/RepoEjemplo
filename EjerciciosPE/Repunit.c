#include "stdio.h"
#include "stdbool.h"

/********** PROTOTIPO DE FUNCIONES **********/
void Entradas(int *);
void Proceso(int *, int *, bool *);
void Salida(bool);

int main() {
  /********** ENTRADAS **********/
  int n, uno;
  bool repunit;
  n = 0;
  uno = 0;
  repunit = false;

  Entradas(&n);
  /********** PROCESOS **********/
  Proceso(&n, &uno, &repunit);

  /********** SALIDAS **********/
  Salida(repunit);
  return 0;
}

/********** FUNCIONES **********/
void Entradas(int *n) {
  printf("Ingrese un numero (Porfas, que sea repunit);\n");
  scanf("%d", n);
}

void Proceso(int *n, int *uno, bool *repunit) {
  int final, nums;
  nums = 0;
  final = *n;
  do {
    final = final / 10;
    nums++;
  } while (final > 0);

  do {
    final = *n % 10;
    *n = *n / 10;
    if (final == 1) {
      *uno = *uno + 1;
    }
  } while(*n != 0);
  if (*uno == nums) {
    *repunit = true;
  }
}

void Salida(bool repunit) {
  if (repunit == true) {
    printf("Si es repunit :D");
  } else {
    printf("Te dije que pongas un repunit :(\n");
  }
}
