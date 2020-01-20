#include "stdio.h"
#include "conio.h"
int main() {
  int Dia;
  Dia = 0;
  printf("Ingrese el numero del dia\n");
  scanf("%d", &Dia);
  switch (Dia) {
    case 1:
      printf("El dia %d es domingo\n", Dia);
      break;
    case 2:
      printf("El dia %d es lunes\n", Dia);
      break;
    case 3:
      printf("El dia %d es martes\n", Dia);
      break;
    case 4:
      printf("El dia %d es miercoles\n", Dia);
      break;
    case 5:
      printf("El dia %d es jueves\n", Dia);
      break;
    case 6:
      printf("El dia %d es viernes\n", Dia);
      break;
    case 7:
      printf("El dia %d es sabado\n", Dia);
      break;
    default:
      printf("No es un dia valido");
      break;
  }
  return 0;
}
