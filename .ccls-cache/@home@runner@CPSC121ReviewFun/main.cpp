#include "vecfuncs.cpp"
#include "vecfuncs.h"
#include <vector>

int main() {
  int min, max;
  vector<int> userNums;

  fillVector(userNums);
  cout << "size: " << userNums.size() << endl;

  // task 1: define and call a function to find and return the min and max
  // number in the vector.
  findExtremes(userNums, min, max);
  // task 2: convert this to 3 file format.
  cout << "min: " << min << " max: " << endl;
}