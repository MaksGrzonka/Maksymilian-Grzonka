#include <iostream>
#include <string>
#include <string.h>
#include <cstdlib>
void *memset(void* s, int c, size_t n)
{
    char* var = (char*)s;
    for (int i = size_t{0}; i < n; i++)
        {
            *(var + i ) = c;
        }
    return 0 ;
}

int main()
{
   
    int tab[3]={1,2,3};
   
    memset(tab,0,sizeof(tab[0])*2);
    for(auto const& v : tab)
        {
            std::cout << v << ", ";
        }
    std::cout<<"\n";
    return 0;
}