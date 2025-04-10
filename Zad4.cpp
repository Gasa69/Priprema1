#include <iostream>
#include <string>

void spoji(const std::string& s1, const std::string& s2, std::string& rezultat) {
    rezultat = s1 + s2;
}

int main() {
    std::string prvi = "Ovo ";
    std::string drugi = "je spojeno";
    std::string rezultat;

    spoji(prvi, drugi, rezultat);

    std::cout << rezultat << std::endl;

    return 0;
}
