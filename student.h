#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <vector>

using namespace std;

struct Student {
    std::string vardas;
    std::string pavarde;
    std::vector<int> namu_darbai;
    int egzaminas;
};

#endif //STUDENT_H
