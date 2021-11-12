#include <iostream>
#include <string>
auto main(int argc, char* argv[])-> int{
    if (argc == 0) 
    {
        return 1;
    }
    int x=std::stoi(argv[1]);
    if(x>3)
    {
        for(int y=x;y>0;y--)
        {
            std::cout << "*";
        }
            std::cout << "\n";

        for(int y=x;y>2;y--)
        {
        for(int z=x;z>0;z--)
        {
            if(z==x||z==1)
            {
                std::cout << "*";
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout << "\n";
        }

        for(int y=x;y>0;y--)
        {
            std::cout << "*";
        }
        std::cout << "\n";
    }
    else{
        std::cerr << "need to be more than 3\n";
    }
    return 0;
}