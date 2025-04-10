#include <iostream>
#include <iomanip>  

int main() {
    double broj1, broj2;

    std::cout << "Unesite prvi broj: ";
    std::cin >> broj1;

    std::cout << "Unesite drugi broj: ";
    std::cin >> broj2;

    double aritmeticka_sredina = (broj1 + broj2) / 2.0;

    std::cout << "Aritmetička sredina je: "
              << std::setw(10) << std::fixed << std::setprecision(5)
              << aritmeticka_sredina << std::endl;

    return 0;
}
