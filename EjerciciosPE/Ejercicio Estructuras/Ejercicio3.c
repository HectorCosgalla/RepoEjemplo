#include "stdio.h"
#define RECS 5
/*
NOTA IMPORTANTE: tuve que cambiar los  tipos de las estructuras de double a float,
lo hice por que por algun motivo que desconozco no me leia las entradas que le daba
*/
struct punto {
  double x;
  double y;
};
struct recta {
  struct punto p;
  double m;
};
/********** PROTOTIPO DE FUNCIONES **********/
void asignacion(struct recta rectas[]);
void puntosInterseccion(struct recta rectas[], float d[]);

int main(){
  /********** DECLARACION DE VARIABLES **********/
  struct recta rectas[RECS];
  float d[RECS] = {0,0,0,0,0};

  /********** ENTRADAS **********/
  asignacion(rectas);

  /********** PROCESOS **********/
  for (int i = 0; i < RECS; i++) {
    d[i] = rectas[i].p.y - (rectas[i].m * rectas[i].p.x);
  }

  /********** SALIDAS **********/
  puntosInterseccion(rectas, d);

  return 0;
}

/********** FUNCIONES **********/
void asignacion(struct recta rectas[]) {
  for (int i = 0; i < RECS; i++) {
    printf("Ingrese el valor de x%d: ", i+1);
    scanf("%lf", &rectas[i].p.x);
    printf("Ingrese el valor de y%d: ", i+1);
    scanf("%lf", &rectas[i].p.y);
    printf("Ingrese el valor de m%d: ", i+1);
    scanf("%lf", &rectas[i].m);
  }
}

void puntosInterseccion(struct recta rectas[], float d[]) {
  double x = 0, y = 0;
  for (int i = 0; i < RECS; i++) {
    for (int j = i+1; j < RECS; j++) {
      if (rectas[i].m == rectas[j].m) {
        printf("La recta %d y %d son paralelas.\n", i+1, j+1);
      } else {
        x = (d[j] - d[i]) / (rectas[i].m - rectas[j].m);
        y = rectas[i].m*x + d[i];
        printf("punto de interseccion de la recta %i y %i es: (%.2lf,%.2lf) \n", i+1, j+1, x, y);
      }
    }
  }
}
