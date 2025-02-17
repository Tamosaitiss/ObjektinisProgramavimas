#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

struct Student {
    std::string vardas;
    std::string pavarde;
    std::vector<int> namu_darbai;
    int egzaminas;
};

double skaiciuotiVidurki(const std::vector<int>& pazymiai, int egzaminas);

#endif //STUDENT_H
