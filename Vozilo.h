#ifndef VOZILO_H
#define VOZILO_H

#include <iostream>
#include <string>

class Vozilo {
private:
    std::string ime;
    int brojKotaca;

public:
    Vozilo();

    std::string getIme() const;
    int getBrojKotaca() const;

    friend std::istream& operator>>(std::istream& in, Vozilo& v);
    friend std::ostream& operator<<(std::ostream& out, const Vozilo& v);
};

#endif
