#ifndef TIPKOVNICA_H
#define TIPKOVNICA_H

#include "EUredaj.h"

class Tipkovnica : public EUredaj {
public:
    void ispis() override {
        std::cout << "Tipkovnica" << std::endl;
    }
};

#endif
