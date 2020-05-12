#include "stdio.h"
#include <windows.h>

//REALIZADO POR: Hector Cosgalla

struct test {
  int e[20];
  double d[15];
  char c[35];
};

/********** PROTOTIPO DE FUNCIONES **********/
void tamanos(struct test a, struct test b);

int main(){
  /********** DECLARACION DE VARIABLES **********/


  struct test a, b;
  tamanos(a,b);
  /********** ENTRADAS **********/
  /********** PROCESOS **********/
  for (int i = 0; i < 20; i++) {
    printf("Ingrese un entero para a.e[%d] = ", i);
    scanf("%d", &a.e[i]);
    printf("Ingrese un entero para b.e[%d] = ", i);
    scanf("%d", &b.e[i]);
  }
  for (int i = 0; i < 15; i++) {
    printf("Ingrese un flotante para a.d[%d] = ", i);
    scanf("%lf", &a.d[i]);
    printf("Ingrese un flotante para b.d[%d] = ", i);
    scanf("%lf", &b.d[i]);
  }
  printf("Ingrese 35 caracteres:");
  fflush(stdin);
  gets(a.c);
  printf("Ingrese otros 35 caracteres:");
  fflush(stdin);
  gets(b.c);
  /********** SALIDAS **********/
  return 0;
}

/********** FUNCIONES **********/
void tamanos(struct test a, struct test b) {
  printf("el tama%co de a.e = %d\n", 164, sizeof(a.e));
  printf("el tama%co de a.d = %d\n", 164, sizeof(a.d));
  printf("el tama%co de a.c = %d\n", 164, sizeof(a.c));
  printf("el tama%co de b.e = %d\n", 164, sizeof(b.e));
  printf("el tama%co de b.d = %d\n", 164, sizeof(b.d));
  printf("el tama%co de b.c = %d\n", 164, sizeof(b.c));
  printf("\nOPRIME CUALQUIER TECLA PARA CONTINUAR...\n");
  getchar();
  fflush(stdin);
  system("cls");
}
