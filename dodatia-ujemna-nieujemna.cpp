#include <iostream>

int main() {
    int liczba_1;
    std::cout << "podaj dowolna liczbe: " << std::endl;
    std::cin >> liczba_1;
    if (liczba_1 > 1) {
        std::cout << "1" << std::endl;
    }
    if (liczba_1 < 0) {
        std::cout << "-1" << std::endl;
    }
    if (liczba_1 == 0) {
        std::cout << "0" << std::endl;
    }
    

    return 0;
}

