void fillVector(vector<int> &);

void findExtremes(vector<int> &vec, int &min, int &max) {
  // assuems there is at least one value in vec
  min = max = vec[0];
  for (int i = 0; i < vec.size(); i++) {
    if (vec[i] < min) {
      // new min
      min = vec[i];
    }
    if (vec[i] > max) {
      // new max
      max = vec[i];
    }
  }
}