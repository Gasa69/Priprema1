#include "Zivotinja.h"

Zivotinja::Zivotinja(std::string i, int k, double t)
    : ime(i), kolikoZivih(k), prosjecnaTezina(t) {}

void Zivotinja::setIme(std::string novoIme) {
    ime = novoIme;
}

void Zivotinja::setKolikoZivih(int broj) {
    kolikoZivih = broj;
}

void Zivotinja::setProsjecnaTezina(double tezina) {
    prosjecnaTezina = tezina;
}

std::string Zivotinja::getIme() const {
    return ime;
}

int Zivotinja::getKolikoZivih() const {
    return kolikoZivih;
}

double Zivotinja::getProsjecnaTezina() const {
    return prosjecnaTezina;
}
