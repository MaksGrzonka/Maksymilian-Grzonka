#include <iostream>
#include <string>
#include <string.h>
#include <cstdlib>
void memfrob_(void *src, size_t n)
{
    char* var = (char*)src;
    for (size_t i = 0; i < n; i++)
        {
            *(var + i) ^= 42;
        }
   
}

int main()
{
   
    char tab[]="Program test";
    
    std::cout<< " Szyfrowanie: "<<"\n";
    memfrob_(tab,sizeof(tab));

    for(auto const& v : tab)
        {
            std::cout << v;
        }
    std::cout<<"\n";
    
    std::cout<<" Deszyfrowanie: "<<"\n";
    memfrob_(tab,sizeof(tab));

    for(auto const& v : tab)
        {
            std::cout << v;
        }
    std::cout<<"\n";
    return 0;
}