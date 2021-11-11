#include <iostream>
int main() {
    int liczba_1, liczba_2;
    std::cout << "podaj 2 liczby: " << std::endl;
    std::cin >> liczba_1 >> liczba_2;

    std::cout << liczba_1 << " == " << liczba_2 << " : " << (liczba_1 == liczba_2) << std::endl;
    std::cout << liczba_1 << " != " << liczba_2 << " : " << (liczba_1 != liczba_2) << std::endl;
    std::cout << liczba_1 << " > " << liczba_2 << " : " << (liczba_1 > liczba_2) << std::endl;
    std::cout << liczba_1 << " < " << liczba_2 << " : " << (liczba_1 < liczba_2) << std::endl;
    std::cout << liczba_1 << " <= " << liczba_2 << " : " << (liczba_1 <= liczba_2) << std::endl;
    std::cout << liczba_1 << " >= " << liczba_2 << " : " << (liczba_1 >= liczba_2) << std::endl;
    
    

    

    return 0;
}