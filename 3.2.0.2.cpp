#include <iostream>
#include <string>

void print(std::string* s,std::string a)
{
    std::cout<<s<<" = " <<a<<"\n";    
}
int main()
{
    std::string a = "Hello world!";
    auto x = &a;    
    print(x,a);
    return 0;
}