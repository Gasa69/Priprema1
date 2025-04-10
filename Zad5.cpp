#include <iostream>
#include <cstdlib> // za atoi

int main(int argc, char* argv[]) {
    const int max = 10;
    int polje[max];

    int brojElemenata = argc - 1; 

    if (brojElemenata > max) {
        std::cout << "Unijeli ste više od 10 brojeva. Koristit će se samo prvih 10." << std::endl;
        brojElemenata = max;
    }

    for (int i = 0; i < brojElemenata; ++i) {
        polje[i] = std::atoi(argv[i + 1]); 
    }

    for (int i = 0; i < brojElemenata; ++i) {
        polje[i] *= polje[i];
    }

    std::cout << "Kvadrirani brojevi: ";
    for (int i = 0; i < brojElemenata; ++i) {
        std::cout << polje[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
