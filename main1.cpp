// liczby pierwsze; 2, 3, 5, 7, 11, 13, 15, 17, 19
#include <iostream>
using namespace std;
int main()
{
    for(int i=1;i<3;i++)
    {
        for(int i=2;i<21;i++)
        {
            int liczba=i;
            bool a=true;
            for(int x=2;x<liczba;x++){
                if(liczba%x==0)
                {
                    a=false;
                    break;
                } 
            }
            if(a)
            {
                cout << liczba << " ";
            }   
        }
        cout << endl;
    }

}