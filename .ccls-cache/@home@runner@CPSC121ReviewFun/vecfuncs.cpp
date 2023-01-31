

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

void fillVector(vector<int> & vec) {
    int num;

    for (int i = 0; i < 5; i++) {
      cout << "Enter an int: ";
      cin >> num;
      vec.push_back(num);
    }
  }