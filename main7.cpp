#include <iostream>
#include <string>
using namespace std;
int count_chars(std::string x, char y)
{
    int suma=0;
    for(int i=0; i<x.size(); i++)
    {
        if(x[i]==y)
        {
            suma++;
        }
    }   
    return suma;
}

int main()
{
    int ilosc=0;
    string wyraz;
    char znak;
    cout<<"podaj slowo: \n";
    cin>>wyraz;
    cout<<"podaj szukany znak: \n";
    cin>>znak;
    ilosc=count_chars(wyraz,znak);
    cout<<"ilość znaków w slowie jest równa: "<<ilosc<<"\n";
    return 0;
}