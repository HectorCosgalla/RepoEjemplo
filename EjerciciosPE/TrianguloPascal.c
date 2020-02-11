/********** PROTOTIPO DE FUNCIONES **********/
void Entradas(int *);
void Proceso(int *, int *, bool *);
void Salida(bool);

int main() {
  /********** ENTRADAS **********/
  int num1, num2, n;
  num1 = 1;
  num2 = 1;
  n = 0;
  Entradas(&n);
  /********** PROCESOS **********/
  Proceso(&n, &num1, &num2);
  /********** SALIDAS **********/
}

/********** FUNCIONES **********/
void Entradas(int &n){
  printf("Ingrese el limite:\n");
  scanf("%d", n);
}

void Proceso(int &n, int &num1, int &num2) {
  int NumMed;
  NumMed = 0;
  for (int i = 0; i <= *n; i++) {
    for (int j = 0; j < i; j++) {

    }
  }
}
