#include <iostream>

struct Student {
    std::string vardas, pavarde;
};

int main() {
    Student studentai[100]; // Maksimalus studentų skaičius
    int studentu_kiekis = 0;
    char pasirinkimas;

    do {
        Student studentas;
        std::cout << "Įveskite studento vardą: ";
        std::cin >> studentas.vardas;
        std::cout << "Įveskite studento pavardę: ";
        std::cin >> studentas.pavarde;

        studentai[studentu_kiekis++] = studentas;
        std::cout << "Ar norite įvesti kitą studentą? (t/n): ";
        std::cin >> pasirinkimas;
    } while (pasirinkimas == 't' || pasirinkimas == 'T');

    std::cout << "\nPavardė      Vardas\n";
    std::cout << "------------------------\n";
    for (int i = 0; i < studentu_kiekis; i++) {
        std::cout << studentai[i].pavarde << " " << studentai[i].vardas << "\n";
    }

    return 0;
}