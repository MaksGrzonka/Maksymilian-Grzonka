#include <iostream>
#include <vector>
#include <string>
#include <time.h>
#include <fstream> 
using namespace std;

void message (string tytuł, bool top = true, bool bot = true )
{
    if(top){
        cout << "#------------------------#" << endl;
        cout << "| ";
    }
    else
    {
        cout << "|";
    }
    bool front = true;
    for (int i = tytuł.length(); i < 23; i++)
    {
        if (front)
        {
            tytuł = " " + tytuł;
        }
        else
        {
            tytuł = tytuł + " ";
        }
        front = !front;
    }
    cout << tytuł.c_str();

    if (bot)
    {
        cout << " |" << endl;
        cout << "#------------------------#" << endl;
    }
    else
    {
        cout << " |" << endl;
    }
}

void wisielec(int iloscprob = 0)
{
    if
    (iloscprob >= 1)
    message("_ _", false, false);
    else
    message("", false, false);
     if
     (iloscprob >= 2)
    message("|  |", false, false);
    else
    message("", false, false);
    if
    (iloscprob >= 3)
    message("0  |", false, false);
    else
    message("", false, false);
    if
    (iloscprob == 4)
    message(" /|| |", false, false);
    else
    message("", false, false);
    if
    (iloscprob == 5)
    message("|  |", false, false);
    else
    message("", false, false);
    if
    (iloscprob == 5)
    message("/ | |", false, false);
    else
    message("", false, false);
    if
    (iloscprob == 6)
    message("|", false, false);
    else
    message("", false, false);
    if
    (iloscprob == 7)
    message("", false, false);
    else
    message("", false, false);
    if
    (iloscprob == 8)
    message("", false, false);
    else
    message("", false, false);
    if
    (iloscprob >= 9)
    message("", false, false);
    else
    message("", false, false);

  
}

 
void litery(string input, char from, char to)
{
    string q;
    for(char i = from; i <= to; i++)
    {
        if(input.find(i) == string::npos)
        {
            q += i;
            q += " ";
        }
        else
        {
            q += " ";
        }
    }
    message(q, false, false);
}
void dostepnelitery(string zajete)
{
    message("Dostępne Litery:", true, true);
    litery(zajete, 'A', 'H');   
    litery(zajete, 'I', 'P');
    litery(zajete, 'Q', 'X');
    litery(zajete, 'Y', 'Z');
}
int main(){
string proby;

message("GRA_WISIELEC");
wisielec(9);
dostepnelitery("SRACZKA");
message("HSAŁO:", true, true);
getchar();
return 0;
}
// praca w toku :))