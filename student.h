#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <iomanip>
#include <vector>
#include <numeric> //accumulate
#include <algorithm> //sort

using namespace std;

struct Student {
    string vardas;
    string pavarde;
    vector<int> namu_darbai;
    int egzaminas;
};

double skaiciuotiVidurki(const vector<int>& pazymiai, int egzaminas);

double skaiciuotiMediana(vector<int> pazymiai, int egzaminas);

#endif //STUDENT_H
