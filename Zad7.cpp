#include <iostream>
#include "Vozilo.h"

int main() {
    Vozilo v1, v2;

    std::cout << "Unos prvog vozila" << std::endl;
    std::cin >> v1;

    std::cout << "Unos drugog vozila" << std::endl;
    std::cin >> v2;

    std::cout << "\n Ispis vozila" << std::endl;
    std::cout << v1 << std::endl;
    std::cout << v2 << std::endl;

    return 0;
}
