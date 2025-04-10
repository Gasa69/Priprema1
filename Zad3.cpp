#include <iostream>
#include <iomanip>
#include "Zivotinja.h"

int main() {
    Zivotinja z1("Slon", 500000, 5400.50);
    Zivotinja z2("Pas", 900000000, 30.25);
    Zivotinja z3("Macak", 600000000, 4.75);
    Zivotinja z4("Pingvin", 12000000, 25.00);

    // Ispis zaglavlja
    std::cout << std::left
              << std::setw(15) << "Ime"
              << std::setw(15) << "Broj zivih"
              << std::setw(15) << "Prosj. tezina"
              << std::endl;

    std::cout << std::setw(45) << std::setfill('-') << "" << std::setfill(' ') << std::endl;

    // Funkcija za ispis pojedine životinje
    auto ispisi = [](const Zivotinja& z) {
        std::cout << std::left
                  << std::setw(15) << z.getIme()
                  << std::setw(15) << z.getKolikoZivih()
                  << std::setw(15) << std::fixed << std::setprecision(2) << z.getProsjecnaTezina()
                  << std::endl;
    };

    ispisi(z1);
    ispisi(z2);
    ispisi(z3);
    ispisi(z4);

    return 0;
}
