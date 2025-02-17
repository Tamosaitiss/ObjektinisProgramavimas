#include "student.h"

double skaiciuotiVidurki(const vector<int>& pazymiai, int egzaminas) {
  if (pazymiai.empty()) return 0.0;

  double vidurkis = accumulate(pazymiai.begin(), pazymiai.end(), 0.0) / pazymiai.size();
  return 0.4 * vidurkis + 0.6 * egzaminas;
}

int main() {

  return 0;
}