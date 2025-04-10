#ifndef ZIVOTINJA_H
#define ZIVOTINJA_H

#include <string>

class Zivotinja {
private:
    std::string ime;
    int kolikoZivih;
    double prosjecnaTezina;

public:
    Zivotinja(std::string ime, int kolikoZivih, double prosjecnaTezina);

    void setIme(std::string novoIme);
    void setKolikoZivih(int broj);
    void setProsjecnaTezina(double tezina);

    std::string getIme() const;
    int getKolikoZivih() const;
    double getProsjecnaTezina() const;
};

#endif
