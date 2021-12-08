#include <iostream>
#include <string>
#include <string.h>
#include <cstdlib>
#include <random>
void memrand_(void *s, size_t n)
{
    std::random_device random;
    std::uniform_int_distribution<int> rand_byte(0,255);
    char* var = (char*)s;
   
    for (size_t i = 0; i < n; i++)
        {
            *(var + i) = rand_byte(random) ;
        }
}

int main()
{
   
    char tab[10];
    
    memrand_(tab,sizeof(tab));

    for(auto const& v : tab)
         {
            std::cout << v;
         }
    std::cout<<"\n";
    return 0;
}