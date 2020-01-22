#include "stdio.h"
#include "conio.h"

int main() {
  int a, i;
  a = 0;
  i = 0;
  printf("          |================================|\n");
  printf("          |  C  R  O  N  O  M  E  T  R  O  |\n");
  printf("          |================================|\n");
  printf("             Pulsa una tecla para empezar\n");
  getchar();
  for (int a = 0; a < 60; a++) {
    for (int i = 1; i < 60; i++) {
      system("cls");
      printf("          |================================|\n");
      printf("          |  C  R  O  N  O  M  E  T  R  O  |\n");
      printf("          |================================|\n");
      printf("                       %d : %d\n", a, i);
      sleep(1);
    }
  }
  return 0;
}
