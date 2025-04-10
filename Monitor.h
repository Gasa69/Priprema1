#ifndef MONITOR_H
#define MONITOR_H

#include "EUredaj.h"

class Monitor : public EUredaj {
public:
    void ispis() override {
        std::cout << "Monitor" << std::endl;
    }
};

#endif
