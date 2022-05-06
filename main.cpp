#include <iostream>
#include "lib.h"
using namespace std;

int main() {
  int x=0;
  cin >> x;
  float n[x];
  for (int i=0; i<x; i++) {
    cin >> n[i];
  }
  float y=array(n, x);
  cout << y <<endl;
  return 0;
}
