#include "stdio.h"
#include "stdlib.h"
#include "time.h"

int main(int argc, char const *argv[]) {
  int v[9], cont[9];
  srand(time(0));

  for (int i = 0; i < 9; i++) {
    v[i] = rand() % 10;
    cont[i] = 0;
  }

  for (int i = 0; i < 9; i++) {
    for (int j = i+1; j < 9; j++) {
      if (v[i] == v[j] || v[i] == 0) {
        v[i] = 0xff;
      }
    }
  }

  for (int i = 0; i < 9; i++) {

    printf("%d ", v[i]);
  }

  return 0;
}
