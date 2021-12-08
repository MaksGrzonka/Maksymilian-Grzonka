#include <iostream>
#include <string>

void swap(int& a, int& b)
{
    std::cout<< a << " " << b << "\n";
    int c;
    c=a; 
    a=b;
    b=c;
    std::cout<< a << " " << b << "\n";
}
int main()
{
    int a = 42;
    int b = 64;
    swap(a,b);
    return 0;
}