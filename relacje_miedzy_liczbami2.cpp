#include <iostream>

auto main( int argc, char* argv[]) -> int
{
    int x=std::stoi(argv[1]);

    for(int i=2; i<argc; i++)
    {
        int y=std::stoi(argv[i]);
        if (x>y)
        {
            std::cout << x << ">" << y << std::endl;
        }
        else if (x==y)
        {
            std::cout << x << "=" << y << std::endl;
        }
        else
        {
            std::cout << x << ">" << y << std::endl;
        }
    }
    return 0;
}