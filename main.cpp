#include <iostream>

#include "sculptor.h"

int main() {
  Sculptor s(10, 10, 10);
  s.setColor(1, 0, 0, 1); 
  s.putVoxel(5, 4, 2);
  return 0;
}