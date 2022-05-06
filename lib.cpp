#include "lib.h"

float array(float n[], int x) {
  float max = n[0];
  for (int i=1; i<x; i++) {
    if (max < n[i]) {
      max = n[i];
    }
  } return max;
}
