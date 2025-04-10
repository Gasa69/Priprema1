#include "Vozilo.h"

Vozilo::Vozilo() : ime(""), brojKotaca(0) {}

std::string Vozilo::getIme() const {
    return ime;
}

int Vozilo::getBrojKotaca() const {
    return brojKotaca;
}

std::istream& operator>>(std::istream& in, Vozilo& v) {
    std::cout << "Unesite ime vozila: ";
    in >> v.ime;
    std::cout << "Unesite broj kotaca: ";
    in >> v.brojKotaca;
    return in;
}

std::ostream& operator<<(std::ostream& out, const Vozilo& v) {
    out << "Vozilo: " << v.ime << ", Broj kotaca: " << v.brojKotaca;
    return out;
}
