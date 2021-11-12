#include <iostream>
#define a auto main() -> int

a{
    int x,y=1,z=1;
    std::cout << "podaj liczbe: ";
    std::cin >> x;
    do
    {
        y=y*z;
        z++;
        x--;
    }
    while (0<x);
    std::cout<< y << "\n";
    return 0;
}