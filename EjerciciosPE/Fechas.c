#include "stdio.h"

int main() {
  int Dia1, Dia2, Mes1, Mes2, Agno1, Agno2;
  printf("Ingrese la fecha 1 con el formato dd/mm/aaaa\n");
  scanf("%d", &Dia1);
  scanf("%d", &Mes1);
  scanf("%d", &Agno1);
  printf("Ingrese la fecha 2 con el formato dd/mm/aaaa\n");
  scanf("%d", &Dia2);
  scanf("%d", &Mes2);
  scanf("%d", &Agno2);
  if (Dia1 <= 0 || Dia1 >= 31 || Dia2 <= 0 || Dia2 >= 31 || Mes1 < 1 || Mes1 > 12 || Mes2 < 1 || Mes2 > 12) {
    printf("ERROR CATASTROFICO! LA FECHA NO ES CORRECTA\n");
  } else {
    if (Agno1 > Agno2) {
      printf("La fecha 1 (%d/%d/%d) es mayor que la fecha 2 (%d/%d/%d)\n", Dia1, Mes1, Agno1, Dia2, Mes2, Agno2);
    } else {
      if (Mes1 > Mes2) {
        printf("La fecha 1 (%d/%d/%d) es mayor que la fecha 2 (%d/%d/%d)\n", Dia1, Mes1, Agno1, Dia2, Mes2, Agno2);
      } else {
        if (Dia1 > Dia2) {
          printf("La fecha 1 (%d/%d/%d) es mayor que la fecha 2 (%d/%d/%d)\n", Dia1, Mes1, Agno1, Dia2, Mes2, Agno2);
        } else {
          printf("La fecha 2 (%d/%d/%d) es mayor que la fecha 1 (%d/%d/%d)\n", Dia2, Mes2, Agno2, Dia1, Mes1, Agno1);
        }
      }
    }
  }

  return 0;
}
