#include "student.h"

double skaiciuotiVidurki(const vector<int>& pazymiai, int egzaminas) {
  if (pazymiai.empty()) return 0.0;

  double vidurkis = accumulate(pazymiai.begin(), pazymiai.end(), 0.0) / pazymiai.size();
  return 0.4 * vidurkis + 0.6 * egzaminas;
}

double skaiciuotiMediana(vector<int> pazymiai, int egzaminas) {
  if (pazymiai.empty()) return 0.0;

  sort(pazymiai.begin(), pazymiai.end());
  double mediana;
  size_t size = pazymiai.size();
  if (size % 2 == 0)
    mediana = (pazymiai[size / 2 - 1] + pazymiai[size / 2]) / 2.0;
  else
    mediana = pazymiai[size / 2];

  return 0.4 * mediana + 0.6 * egzaminas;
}

int main() {

  Student studentas;
  cout << "Iveskite studento varda: ";
  cin >> studentas.vardas;
  cout << "Iveskite studento pavarde: ";
  cin >> studentas.pavarde;

  cout << "Iveskite namu darbu pazymius (baigti -1): ";
  int pazymys;
  while (true) {
    cin >> pazymys;
    if (pazymys == -1) break;
    studentas.namu_darbai.push_back(pazymys);
  }

  return 0;
}