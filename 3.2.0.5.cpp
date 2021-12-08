#include <iostream>
#include <string>
#include <string.h>
#include <cstdlib>
void *memcpy(void* dest, const void *src, size_t n)
{
    char* xdest = (char*)dest;
    char* xsrc = (char*)src;
    for (size_t i = 0; i < n; i++)
        {
            *(xdest + i ) = *(xsrc + i);
        }
    return 0 ;
}

int main()
{
   
    char tab[]="Program test";
    char tab1[7];

    memcpy(tab1,tab,sizeof(tab1));

    for(auto const& v : tab1)
        {
            std::cout << v;
        }
    std::cout<<"\n";
    return 0;
}