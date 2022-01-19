#include <iostream>
#include <string>
using namespace std;
void show(string x, int y){

    for( int i=0; i<x.size(); i+=y)
    {
        cout<<x[i];
    }
    cout<<"\n";
}

int main(){
    string wyraz;
    int ck;
    cout<<"Podaj wyraz: ";
    getline(cin,wyraz);
    cout<<"Podaj co który znak wyświetlić: ";
    cin>> ck;
    show(wyraz,ck);
    return 0;   
}