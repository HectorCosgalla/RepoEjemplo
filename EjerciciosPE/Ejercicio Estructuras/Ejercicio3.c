#include "stdio.h"
#define RECS 5

struct punto {
  float x;
  float y;
};
struct recta {
  struct punto p;
  float m;
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
    printf("(%f,%f) & m = %f & d = %f\n", rectas[i].p.x, rectas[i].p.y, rectas[i].m, d[i]);
  }

  /********** SALIDAS **********/
  puntosInterseccion(rectas, d);

  return 0;
}

/********** FUNCIONES **********/
void asignacion(struct recta rectas[]) {
  for (int i = 0; i < RECS; i++) {
    printf("Ingrese el valor de x%d: ", i+1);
    scanf("%f", &rectas[i].p.x);
    printf("Ingrese el valor de y%d: ", i+1);
    scanf("%f", &rectas[i].p.y);
    printf("Ingrese el valor de m%d: ", i+1);
    scanf("%f", &rectas[i].m);
  }
}

void puntosInterseccion(struct recta rectas[], float d[]) {
  float x = 0, y = 0;
  for (int i = 0; i < RECS; i++) {
    for (int j = i+1; j < RECS; j++) {
      x = (d[j] - d[i]) / (rectas[i].m - rectas[j].m);
      y = rectas[i].m*x + d[i];
      printf("punto de interseccion de la recta %i y %i es: (%f,%f) \n", i, j, x, y);
    }
  }
}
