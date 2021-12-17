#include <iostream>
#include <string>
using namespace std;
int main()
{
    string imię;
    string imię2;
    cout << "Podaj imię: \n";
    cin >> imię;
    cout << "podaj drugie imię; \n";
    cin >> imię2;
        if(imię.length() > imię2.length())
        {
            cout << "Pierwszę imię jest dłuszę od drugiego! \n";
        }
        if(imię.length() < imię2.length())
        {
            cout << "Pierwszę imię jest krotsze od drugiego... \n";
        }
        if(imię.length() == imię2.length())
        {
            cout << "Imiona są tej samej długości. \n";
        }
        return 0;
}