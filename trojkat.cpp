#include <iostream>
#include <string>
auto main(int argc, char* argv[])-> int{
    if (argc == 0) {
        return 1;
    }
    int x=std::stoi(argv[1]);

    for(int z=1; z<=x; z++){
        for(int y=1; y<=z; y++){
        
        std::cout << "*";
        }
        std::cout << "\n";
    }
    return 0;
}