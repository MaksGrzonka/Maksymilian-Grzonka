#include <iostream>
#include <string>
using namespace std;
int main () 
{
string password = "student";
string x="";
do
{
    cout << "Podaj hasło";
    getline(cin,x);

} 
while(password!=x);
cout << "ok\n";

return 0;
}