#include <iostream>
#include <string>
#include <string.h>
#include <cstdlib>
void memrev_(void *s, size_t n)
{
    char* var = (char*)s;
    char* zm = new char[n];

    for (size_t i = 0, j = n-1; i < n; i++, j--)
        {
            *(zm + i) = *(var + j);
        }
    for (size_t i = 0; i < n; i++)
        {
            *(var + i) = *(zm + i) ;
        }
}

int main()
{
   
    char tab[]="Program test";
    
    
    

    for(auto const& v : tab)
        {
            std::cout << v;
        }
    std::cout<<"\n";
    
    
    memrev_(tab,sizeof(tab));

    for(auto const& v : tab)
        {
            std::cout << v;
        }
    std::cout<<"\n";
    return 0;
}