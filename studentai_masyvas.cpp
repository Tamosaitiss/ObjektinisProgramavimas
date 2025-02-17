#include "studentai_masyvas.h"

int main() {
    Student studentai[MAX_STUDENTU];
    int studentu_kiekis = 0;

    cout << "Iveskite studentu duomenis. Baigti iveskite '-1' kaip varda.\n";

    while (true) {
        ivestiStudenta(studentai, studentu_kiekis);
        if (studentai[studentu_kiekis - 1].vardas == "-1") {
            studentu_kiekis--;
            break;
        }
    }

    spausdintiStudentus(studentai, studentu_kiekis);

    return 0;
}