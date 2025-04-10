#include <iostream>
#include "Tipkovnica.h"
#include "Monitor.h"

int main() {
    EUredaj* e1 = new Tipkovnica();
    EUredaj* e2 = new Monitor();

    std::cout << "Poziv ispisa preko klase:" << std::endl;
    e1->ispis(); 
    e2->ispis(); 

    delete e1;
    delete e2;

    return 0;
}