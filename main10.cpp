#include <iostream>
#include <string>
using namespace std;
void box_print(string siatka, bool top = true, bool bot = true)
{
    if(top){
        cout << "*********" << endl;
        cout << "*";
    }    
    else
    {
        cout << "*";
    }
    
    bool front = true;
    for (int i = siatka.length(); i < 7; i++)
    {
        if (front)
        {
            siatka = " " + siatka;
        }
        else
        {
            siatka = siatka + " ";
        }
        front = !front;
    }
    cout << siatka.c_str();


    if (bot)
    {
        cout << "*" << endl;
        cout << "*********" << endl;
    }
    else
    {
        cout << "*" << endl;
    }
}

int main()
{
    
    box_print("hello", true, false);
    box_print("World", false, false);
    box_print("in", false, false);
    box_print("a", false, false);
    box_print("frame", false, true);

    return 0;
}