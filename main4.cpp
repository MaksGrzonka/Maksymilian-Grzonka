#include <iostream>
#include <string>
using namespace std;
int main()
{
    // przepraszam, zapomniałem ze moge w jednym wierszu :)
    string imie1;
    string imie2;
    string imie3;
    string imie4;
    string imie5;
    int meskie=0, zenskie=0;
    cout << " Podaj 5 imion;  " << endl;
    cin >> imie1;
    cin >> imie2;
    cin >> imie3;
    cin >> imie4;
    cin >> imie5;
    string grupa[5]={imie1,imie2,imie3,imie4,imie5};
    
    for(int i=0;i<5;i++)
    {
        if(grupa[i].back()=='a')
        {
            zenskie++;
        }
        else
        {
            meskie++;
        }
    }
    
   cout << "Zenskich imion jest: " << zenskie << endl << "Meskich imion jest: " << meskie << endl;

return 0;
}