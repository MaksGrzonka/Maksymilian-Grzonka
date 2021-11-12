#include <iostream>
#define a auto main() -> int

a{
    int x,y=1,z=1;
    std::cout << "podaj liczbe: ";
    std::cin >> x;
    while (0<x)
    {
        y=y*z;
        z++;
        x--;
    }
    std::cout<< y << "\n";
    return 0;
}

/* nie potrafię zrobić zadania z silnią :( */ 
