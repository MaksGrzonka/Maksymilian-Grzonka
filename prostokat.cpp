#include <iostream>
#include <string>
auto main(int argc, char* argv[])-> int{
    if (argc == 1 || argc == 0) {
        return 1;
    }
    int z;
    int x=std::stoi(argv[1]);
    int y=std::stoi(argv[2]);
    for(;x>0;x--){
        z=y;
        for(;z>0;z--){
        
        std::cout << "*";
        }
        std::cout << "\n";
    }
    return 0;
}