#include "stdlib.h"
#include "time.h"


int numAzar(){
  srand(time(0));
  return rand() % 10;
}
